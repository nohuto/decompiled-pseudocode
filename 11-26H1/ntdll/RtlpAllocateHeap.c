/*
 * XREFs of RtlpAllocateHeap @ 0x180009890
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpUpdateHeapWatermarks @ 0x18000C5B0 (RtlpUpdateHeapWatermarks.c)
 *     RtlTryEnterCriticalSection @ 0x18000C670 (RtlTryEnterCriticalSection.c)
 *     RtlpPerformHeapMaintenance @ 0x18000C750 (RtlpPerformHeapMaintenance.c)
 *     RtlpUpdateTagEntry @ 0x18000DDC8 (RtlpUpdateTagEntry.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindEntry @ 0x180015010 (RtlpFindEntry.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18006D468 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpGetLFHContext @ 0x180095488 (RtlpGetLFHContext.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800C9D90 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHeapLogRangeReserve @ 0x180113B10 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpAllocateHeap(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
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
  _QWORD *v22; // rsi
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  int v25; // edi
  unsigned __int16 v26; // r15
  int v27; // eax
  __int64 v28; // r10
  int v29; // edi
  unsigned __int16 v30; // r8
  int v31; // edi
  __int64 v32; // rdi
  unsigned int v33; // r8d
  unsigned int *v34; // r9
  unsigned int v35; // edx
  int v36; // ecx
  __int64 v37; // rdi
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // r10
  __int64 *v41; // r11
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 *v44; // rdi
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  int v47; // r8d
  unsigned int v48; // r12d
  __int64 v49; // r9
  _QWORD *v50; // rax
  __int64 v51; // r13
  __int64 v52; // rax
  int v53; // esi
  unsigned __int16 v54; // r8
  int v55; // esi
  _DWORD *v56; // rdx
  char v57; // r13
  int v58; // edi
  SIZE_T v59; // rdi
  SIZE_T v60; // rsi
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rcx
  bool v64; // dl
  __int64 v65; // rax
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rsi
  __int64 v68; // rcx
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // r13
  _QWORD *v72; // rax
  __int64 *v73; // rdi
  unsigned __int64 v74; // rcx
  int v75; // ecx
  _QWORD *v76; // r15
  _QWORD *v77; // r9
  _QWORD *v78; // rax
  int v79; // r12d
  unsigned __int16 v80; // r8
  int v81; // r12d
  __int64 v82; // r10
  int v83; // r12d
  unsigned __int16 v84; // r8
  int v85; // r12d
  __int64 v86; // r8
  unsigned int v87; // r9d
  unsigned int *v88; // r10
  unsigned int v89; // edx
  int v90; // ecx
  __int64 v91; // r8
  int v92; // eax
  unsigned __int16 v93; // cx
  _QWORD *v94; // r12
  __int64 *v95; // rax
  __int64 *v96; // rdi
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  int v99; // edx
  int v100; // r10d
  unsigned int v101; // r15d
  __int64 v102; // r13
  __int64 v103; // r9
  _DWORD *v104; // rdx
  _DWORD *v105; // r11
  unsigned __int16 v106; // cx
  __int64 v107; // rdi
  char v108; // si
  __int64 v109; // rdi
  __int64 v110; // r14
  _QWORD *k; // r13
  int v112; // edi
  unsigned __int16 v113; // r8
  int v114; // edi
  int v115; // r8d
  unsigned __int16 v116; // r11
  __int64 v117; // rcx
  _QWORD *n; // rdx
  int v119; // r12d
  unsigned __int16 v120; // r8
  int v121; // r12d
  __int64 *v122; // r8
  __int64 v123; // r10
  __int64 *v124; // r11
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 *v127; // rdi
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rcx
  int v130; // r9d
  unsigned int v131; // r13d
  __int64 v132; // rax
  __int64 *v133; // rax
  __int64 *v134; // r8
  int v135; // r13d
  unsigned __int16 v136; // r9
  int v137; // r13d
  _DWORD *v138; // rdx
  char v139; // al
  SIZE_T v140; // r13
  unsigned __int64 v141; // r8
  unsigned __int64 v142; // r15
  _QWORD *v143; // rdi
  _QWORD *v144; // r8
  int v145; // eax
  unsigned __int16 v146; // cx
  _QWORD *v147; // r15
  __int64 *v148; // rax
  __int64 *v149; // rdx
  unsigned __int64 v150; // rdi
  unsigned __int64 v151; // rcx
  __int64 v152; // r10
  __int64 *v153; // r11
  __int64 v154; // r9
  __int64 v155; // rax
  __int64 *v156; // rsi
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // rcx
  __int64 v159; // r9
  __int64 v160; // rax
  __int64 v161; // r8
  __int64 v162; // rdi
  __int64 *v163; // rsi
  __int64 v164; // r9
  __int64 v165; // rax
  __int64 *v166; // rdx
  unsigned __int64 v167; // rcx
  unsigned __int64 v168; // r9
  struct _TEB *v169; // rdi
  int v170; // r8d
  int v171; // r13d
  unsigned int v172; // r12d
  __int64 v173; // rax
  __int64 v174; // r9
  _QWORD *v175; // rax
  __int64 v176; // r8
  __int64 v177; // rax
  int v178; // edi
  unsigned __int16 v179; // ax
  int v180; // edi
  _DWORD *v181; // rdx
  int v182; // r9d
  _DWORD *v183; // r8
  unsigned __int64 v184; // rdx
  _QWORD *v185; // rdi
  _QWORD *Entry; // r8
  _QWORD *v187; // r15
  __int64 *v188; // rax
  __int64 **v189; // rdx
  unsigned __int64 v190; // rdi
  unsigned __int64 v191; // rcx
  unsigned __int64 v192; // rcx
  struct _TEB *v193; // rdi
  _BYTE *v194; // rdi
  __int64 v195; // r9
  _BYTE *v196; // r10
  __int64 ExtraStuffPointer; // rsi
  int v198; // eax
  unsigned __int16 v199; // cx
  __int64 v200; // r9
  __int64 v201; // r9
  _DWORD *v202; // r8
  unsigned __int64 v203; // rdx
  _QWORD *v204; // rdi
  _QWORD *v205; // r8
  _QWORD *v206; // rdi
  __int64 *v207; // rax
  __int64 *v208; // rdx
  unsigned __int64 v209; // rcx
  unsigned __int64 v210; // r8
  int v211; // eax
  unsigned __int16 v212; // cx
  bool v213; // zf
  __int64 v214; // rdx
  __int64 v215; // rcx
  unsigned __int16 LFHContext; // ax
  unsigned int v217; // ecx
  unsigned int v218; // eax
  unsigned __int64 v219; // r13
  unsigned __int64 v220; // rax
  signed __int64 v221; // rcx
  unsigned __int64 v222; // rtt
  __int64 v223; // rax
  unsigned __int64 v224; // rsi
  __int64 v225; // rdi
  __int64 v226; // rcx
  __int64 v227; // rcx
  __int64 v228; // rdi
  __int64 v229; // rcx
  __int64 *v230; // rax
  struct _TEB *v231; // rdi
  _DWORD *SharedData; // rcx
  __int64 v233; // rcx
  __int64 v235; // r13
  unsigned __int64 v236; // r15
  char v237; // [rsp+30h] [rbp-488h]
  char v238; // [rsp+34h] [rbp-484h]
  bool v239; // [rsp+34h] [rbp-484h]
  unsigned int v240; // [rsp+34h] [rbp-484h]
  __int64 v241; // [rsp+40h] [rbp-478h]
  int v242; // [rsp+58h] [rbp-460h]
  unsigned __int64 v243; // [rsp+60h] [rbp-458h]
  int m; // [rsp+60h] [rbp-458h]
  _QWORD *v245; // [rsp+60h] [rbp-458h]
  int v246; // [rsp+90h] [rbp-428h]
  _QWORD *v247; // [rsp+A8h] [rbp-410h]
  unsigned int v248; // [rsp+B0h] [rbp-408h]
  __int64 v249; // [rsp+B8h] [rbp-400h]
  __int64 *v250; // [rsp+B8h] [rbp-400h]
  __int64 **v251; // [rsp+C0h] [rbp-3F8h]
  __int64 v252; // [rsp+C0h] [rbp-3F8h]
  int v253; // [rsp+C8h] [rbp-3F0h]
  __int64 v254; // [rsp+C8h] [rbp-3F0h]
  __int64 *v255; // [rsp+D0h] [rbp-3E8h]
  _QWORD *v256; // [rsp+D8h] [rbp-3E0h]
  unsigned int v257; // [rsp+E0h] [rbp-3D8h]
  SIZE_T v258; // [rsp+E8h] [rbp-3D0h]
  _QWORD *v259; // [rsp+F0h] [rbp-3C8h]
  int j; // [rsp+F8h] [rbp-3C0h]
  __int64 v261; // [rsp+100h] [rbp-3B8h]
  __int64 v262; // [rsp+108h] [rbp-3B0h]
  __int64 v263; // [rsp+138h] [rbp-380h]
  int v264; // [rsp+140h] [rbp-378h]
  __int64 v265; // [rsp+140h] [rbp-378h]
  int v266; // [rsp+150h] [rbp-368h]
  __int64 *v267; // [rsp+158h] [rbp-360h]
  int v268; // [rsp+160h] [rbp-358h]
  __int64 *v269; // [rsp+160h] [rbp-358h]
  __int64 v270; // [rsp+188h] [rbp-330h] BYREF
  unsigned int *v271; // [rsp+190h] [rbp-328h]
  unsigned __int64 v272; // [rsp+198h] [rbp-320h]
  unsigned int *v273; // [rsp+1A0h] [rbp-318h]
  _QWORD *v274; // [rsp+1A8h] [rbp-310h]
  SIZE_T v275; // [rsp+1B0h] [rbp-308h]
  _QWORD *v276; // [rsp+1B8h] [rbp-300h]
  unsigned __int64 v277; // [rsp+1C0h] [rbp-2F8h]
  int v278; // [rsp+1C8h] [rbp-2F0h]
  int v279; // [rsp+1CCh] [rbp-2ECh]
  int v280; // [rsp+1D0h] [rbp-2E8h]
  int v281; // [rsp+1D4h] [rbp-2E4h]
  int v282; // [rsp+1D8h] [rbp-2E0h]
  int v283; // [rsp+1DCh] [rbp-2DCh]
  int v284; // [rsp+1E0h] [rbp-2D8h]
  int v285; // [rsp+1E4h] [rbp-2D4h]
  int v286; // [rsp+1E8h] [rbp-2D0h]
  int v287; // [rsp+1ECh] [rbp-2CCh]
  int v288; // [rsp+1F0h] [rbp-2C8h]
  int v289; // [rsp+1F4h] [rbp-2C4h]
  int v290; // [rsp+1F8h] [rbp-2C0h]
  int v291; // [rsp+1FCh] [rbp-2BCh]
  unsigned int NtGlobalFlag; // [rsp+200h] [rbp-2B8h]
  unsigned int v293; // [rsp+204h] [rbp-2B4h]
  int v294; // [rsp+208h] [rbp-2B0h]
  int v295; // [rsp+20Ch] [rbp-2ACh]
  int v296; // [rsp+210h] [rbp-2A8h]
  int v298; // [rsp+218h] [rbp-2A0h]
  int v299; // [rsp+21Ch] [rbp-29Ch]
  int v300; // [rsp+220h] [rbp-298h]
  int v301; // [rsp+224h] [rbp-294h]
  int v302; // [rsp+228h] [rbp-290h]
  int v303; // [rsp+22Ch] [rbp-28Ch]
  int v304; // [rsp+230h] [rbp-288h]
  int v305; // [rsp+234h] [rbp-284h]
  int v306; // [rsp+238h] [rbp-280h]
  int v307; // [rsp+23Ch] [rbp-27Ch]
  int v308; // [rsp+240h] [rbp-278h]
  int v309; // [rsp+244h] [rbp-274h]
  int v310; // [rsp+248h] [rbp-270h]
  int v311; // [rsp+24Ch] [rbp-26Ch]
  int v312; // [rsp+250h] [rbp-268h]
  BOOL v313; // [rsp+254h] [rbp-264h]
  int v314; // [rsp+258h] [rbp-260h]
  int v315; // [rsp+25Ch] [rbp-25Ch]
  int v316; // [rsp+260h] [rbp-258h]
  int v317; // [rsp+264h] [rbp-254h]
  int v318; // [rsp+268h] [rbp-250h]
  int v319; // [rsp+26Ch] [rbp-24Ch]
  unsigned __int16 *v320; // [rsp+270h] [rbp-248h]
  int v321; // [rsp+278h] [rbp-240h]
  __int64 *v322; // [rsp+280h] [rbp-238h]
  _QWORD *v323; // [rsp+288h] [rbp-230h]
  __int64 *v324; // [rsp+290h] [rbp-228h]
  int v325; // [rsp+298h] [rbp-220h]
  __int64 *v326; // [rsp+2A0h] [rbp-218h]
  __int64 v327; // [rsp+2A8h] [rbp-210h]
  unsigned __int64 v328; // [rsp+2B0h] [rbp-208h]
  unsigned __int64 v329; // [rsp+2B8h] [rbp-200h]
  int v330; // [rsp+2C0h] [rbp-1F8h]
  int v331; // [rsp+2C4h] [rbp-1F4h]
  int v332; // [rsp+2C8h] [rbp-1F0h]
  int v333; // [rsp+2CCh] [rbp-1ECh]
  unsigned __int64 v334; // [rsp+2D0h] [rbp-1E8h]
  int v335; // [rsp+2D8h] [rbp-1E0h]
  __int64 *v336; // [rsp+2E0h] [rbp-1D8h]
  unsigned __int64 v337; // [rsp+2E8h] [rbp-1D0h]
  __int64 *v338; // [rsp+2F0h] [rbp-1C8h]
  unsigned __int64 v339; // [rsp+2F8h] [rbp-1C0h]
  __int64 *v340; // [rsp+300h] [rbp-1B8h]
  __int64 v341; // [rsp+308h] [rbp-1B0h]
  __int64 v342; // [rsp+310h] [rbp-1A8h]
  unsigned __int64 v343; // [rsp+318h] [rbp-1A0h]
  _QWORD *v344; // [rsp+320h] [rbp-198h]
  __int64 v345; // [rsp+328h] [rbp-190h]
  struct _TEB *v346; // [rsp+330h] [rbp-188h]
  __int128 v347; // [rsp+338h] [rbp-180h]
  __int128 v348; // [rsp+348h] [rbp-170h]
  __int128 v349; // [rsp+358h] [rbp-160h]
  __int128 v350; // [rsp+368h] [rbp-150h]
  __int128 v351; // [rsp+378h] [rbp-140h]
  __int128 v352; // [rsp+388h] [rbp-130h]
  __int128 v353; // [rsp+398h] [rbp-120h]
  __int128 v354; // [rsp+3A8h] [rbp-110h]
  __int128 v355; // [rsp+3B8h] [rbp-100h]
  __int128 v356; // [rsp+3C8h] [rbp-F0h]
  _QWORD *v357; // [rsp+3D8h] [rbp-E0h]
  _QWORD *v358; // [rsp+3E0h] [rbp-D8h]
  unsigned __int64 v359; // [rsp+3E8h] [rbp-D0h]
  unsigned __int64 v360; // [rsp+3F0h] [rbp-C8h]
  __int64 v361; // [rsp+3F8h] [rbp-C0h]
  _QWORD *v362; // [rsp+400h] [rbp-B8h]
  struct _TEB *v363; // [rsp+408h] [rbp-B0h]
  __int64 v364; // [rsp+410h] [rbp-A8h]
  struct _TEB *v365; // [rsp+418h] [rbp-A0h]
  __int64 v366; // [rsp+420h] [rbp-98h]
  __int64 v367; // [rsp+428h] [rbp-90h]
  __int64 v368; // [rsp+430h] [rbp-88h]
  __int64 v369; // [rsp+438h] [rbp-80h]
  int v370; // [rsp+448h] [rbp-70h]
  int v371; // [rsp+458h] [rbp-60h]
  int v372; // [rsp+468h] [rbp-50h]
  int v373; // [rsp+478h] [rbp-40h]
  unsigned int v374; // [rsp+4C8h] [rbp+10h]
  void *v375; // [rsp+4D0h] [rbp+18h]
  unsigned __int64 v376; // [rsp+4D8h] [rbp+20h] BYREF

  v376 = a4;
  v375 = a3;
  v374 = a2;
  v6 = a4;
  v243 = a4;
  v327 = 0LL;
  v342 = 0LL;
  v242 = 1;
  v274 = 0LL;
  v328 = 0LL;
  v237 = 0;
  v323 = 0LL;
  v241 = 0LL;
  v270 = 0LL;
  v8 = 0;
  v343 = 0LL;
  v320 = 0LL;
  v9 = a4 >> 4;
  if ( (a2 & 0x7D010F60) != 0 || (unsigned __int64)a3 >= 0x80000000 )
  {
    v242 = 0;
    *a6 = 4;
    if ( (unsigned __int64)a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    if ( (a2 & 0x61000000) != 0 && (a2 & 0x10000000) == 0 )
      return RtlDebugAllocateHeap(a1);
    v235 = (__int64)a3;
    if ( !a3 )
      v235 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v235);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v243 = v6;
    v376 = v6;
    v10 = ((unsigned int)a2 >> 4) & 0xE0 | 1;
    v238 = v10;
    if ( (a2 & 0x3C000100) != 0 || (v236 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v10 = ((unsigned int)a2 >> 4) & 0xE0 | 3;
      v238 = v10;
      v236 = v6 + 16;
      v6 = v236;
      v243 = v236;
      v376 = v236;
    }
    v11 = v236 >> 4;
    v261 = v11;
  }
  else
  {
    v10 = 1;
    v238 = 1;
    v11 = a4 >> 4;
    v261 = a4 >> 4;
    if ( v9 < 2 )
    {
      v6 = a4 + 16;
      v243 = a4 + 16;
      v376 = a4 + 16;
      v11 = 2LL;
      v261 = 2LL;
    }
    *a6 = 3;
  }
  v12 = a2 & 0x800000;
  if ( (a2 & 0x800000) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    v10 |= 8u;
    v238 = v10;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_1801CA908 )
      {
        v231 = NtCurrentTeb();
        v363 = v231;
        v231->LastStatusValue = -1073741420;
        v231->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
        v108 = 0;
        v109 = 0LL;
        v110 = 0LL;
        goto LABEL_514;
      }
      v8 = 1;
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v217 = *(_DWORD *)(a1 + 616) + 1;
      *(_DWORD *)(a1 + 616) = v217;
      v218 = *(_DWORD *)(a1 + 620) + 1;
      *(_DWORD *)(a1 + 620) = v218;
      if ( *(_BYTE *)(a1 + 418) != 2 )
      {
        if ( v217 < v218 )
        {
          v218 = 0;
          *(_QWORD *)(a1 + 616) = 0LL;
          v217 = 0;
        }
        if ( v218 >= v217 >> 4 )
          *(_DWORD *)(a1 + 120) |= 0x20000000u;
      }
    }
    v237 = 1;
    if ( (*(_DWORD *)(a1 + 120) & 0x30000000) != 0 )
      RtlpPerformHeapMaintenance(a1);
    a3 = v375;
  }
  if ( v11 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v219 = v6 + 48;
      v376 = v219 + 8;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v219 + 4103) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           a1 + 376) )
      {
        v220 = qword_1801C5F00;
        v366 = qword_1801C5F00;
        v367 = qword_1801C5F00;
        do
        {
          v221 = v220 ^ (v220 >> 12) ^ ((v220 ^ (v220 >> 12)) << 25) ^ ((v220 ^ (v220 >> 12) ^ ((v220 ^ (v220 >> 12)) << 25)) >> 27);
          v222 = v220;
          v220 = _InterlockedCompareExchange64(&qword_1801C5F00, v221, v220);
        }
        while ( v222 != v220 );
        v368 = 0x2545F4914F6CDD1DLL * v221;
        v369 = 0x2545F4914F6CDD1DLL * v221;
        v343 = (unsigned __int64)((29 * (_BYTE)v221) & 0xF) << 12;
        v223 = RtlpHpAllocVirtBlockCommitFirst(a1, &v376, v343, &v270);
        v110 = v223;
        if ( v223 )
        {
          v224 = v376;
          *(_WORD *)(v223 + 56) = v376 - (_WORD)v375;
          *(_BYTE *)(v223 + 58) = v10 | 2;
          *(_QWORD *)(v223 + 32) = v224;
          *(_QWORD *)(v223 + 40) = v270;
          *(_BYTE *)(v223 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v224;
          v225 = 2147353472LL;
          if ( RtlGetCurrentServiceSessionId() )
            v226 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v226 = 2147353472LL;
          if ( *(_BYTE *)v226 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, v110, v224, 9LL);
          if ( RtlGetCurrentServiceSessionId() )
            v227 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v227 = 2147353472LL;
          if ( *(_BYTE *)v227 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v225 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapExtendEvent(a1, v110, v224, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v225);
          }
          v228 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v229 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v229 = 2147353482LL;
          if ( *(_BYTE *)v229 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v228 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapExtendEvent(a1, v110, v224, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v228);
          }
          if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
            *(_WORD *)(v110 + 16) = RtlLogStackBackTraceEx(1LL);
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(v110 + 18) = RtlpUpdateTagEntry(
                                      a1,
                                      (unsigned __int8)(v374 >> 18),
                                      0,
                                      *(_QWORD *)(v110 + 32) >> 4,
                                      1);
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v110 + 59) = *(_BYTE *)(v110 + 56) ^ *(_BYTE *)(v110 + 57) ^ *(_BYTE *)(v110 + 58);
            *(_DWORD *)(v110 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          a3 = (void *)(a1 + 272);
          v230 = *(__int64 **)(a1 + 280);
          if ( *v230 == a1 + 272 )
          {
            *(_QWORD *)v110 = a3;
            *(_QWORD *)(v110 + 8) = v230;
            *v230 = v110;
            *(_QWORD *)(a1 + 280) = v110;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)a3, 0, *v230, 0LL);
          }
          v109 = v110 + 64;
          v108 = v237;
        }
        else
        {
          v109 = 0LL;
          ++*(_DWORD *)(a1 + 632);
          v108 = v237;
        }
      }
      else
      {
        v109 = 0LL;
        v108 = v237;
        v110 = 0LL;
      }
      goto LABEL_514;
    }
    goto LABEL_384;
  }
  if ( !v12 )
  {
    if ( v9 >= *(unsigned __int16 *)(a1 + 432) )
    {
      if ( (unsigned __int64)a3 <= RtlpLargestLfhBlock && (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) )
      {
        v213 = *(_BYTE *)(a1 + 419) == 2;
        goto LABEL_455;
      }
    }
    else if ( (unsigned __int64)a3 <= RtlpLargestLfhBlock )
    {
      v13 = v9 & 7;
      v14 = v9 >> 3;
      if ( ((1 << (v9 & 7)) & *(unsigned __int8 *)((v9 >> 3) + a1 + 434)) == 0 )
      {
        v15 = (unsigned __int16 *)(*(_QWORD *)(a1 + 424) + 2 * v9);
        v320 = v15;
        v16 = *v15 + 33;
        *v15 = v16;
        if ( !v8 && (v16 & 0x1Fu) <= 0x10 )
        {
          if ( v16 <= 0xFF00u )
            goto LABEL_21;
          a3 = v375;
        }
        v214 = (__int64)a3;
        if ( !a3 )
          v214 = 1LL;
        if ( *(_BYTE *)(a1 + 418) == 2 )
          v215 = *(_QWORD *)(a1 + 408);
        else
          v215 = 0LL;
        LFHContext = RtlpGetLFHContext(v215, v214);
        if ( LFHContext != 0xFFFF )
        {
          *v15 = LFHContext;
          *(_BYTE *)(v14 + a1 + 434) |= 1 << v13;
          ++*(_DWORD *)(a1 + 656);
          goto LABEL_21;
        }
        if ( *(_BYTE *)(a1 + 418) != 2 )
        {
LABEL_456:
          *(_DWORD *)(a1 + 120) |= 0x20000000u;
          goto LABEL_21;
        }
        v213 = *(_QWORD *)(a1 + 408) == 0LL;
LABEL_455:
        if ( !v213 )
          goto LABEL_21;
        goto LABEL_456;
      }
    }
  }
LABEL_21:
  if ( !a5 || (v17 = *a5) == 0LL )
  {
    v274 = (_QWORD *)(a1 + 336);
    for ( i = *(__int64 **)(a1 + 312); ; i = (__int64 *)*i )
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
    v322 = i;
    for ( j = v20; ; j = v20 )
    {
      v21 = (unsigned int)(v20 - *((_DWORD *)i + 6));
      v22 = 0LL;
      v23 = (_QWORD *)i[4];
      v24 = (_QWORD *)v23[1];
      if ( v23 == v24 )
      {
        v22 = (_QWORD *)i[4];
      }
      else
      {
        v348 = 0LL;
        v25 = *((_DWORD *)v24 - 2);
        v298 = v25;
        v299 = v25;
        DWORD2(v348) = v25;
        v26 = v25;
        if ( *(_DWORD *)(a1 + 124) )
        {
          DWORD2(v348) = *(_DWORD *)(a1 + 136) ^ v25;
          v26 = WORD4(v348);
          if ( BYTE11(v348) != (BYTE8(v348) ^ (unsigned __int8)(BYTE9(v348) ^ BYTE10(v348))) )
            RtlpLogHeapFailure(3, a1, (_DWORD)v24 - 16, 0, 0LL, 0LL);
        }
        v27 = v26;
        v11 = v261;
        v300 = v261 - v27;
        if ( (int)v261 - v27 > 0 )
        {
          v22 = v23;
        }
        else
        {
          v28 = *v23;
          v349 = 0LL;
          v29 = *(_DWORD *)(v28 - 8);
          v302 = v29;
          v303 = v29;
          DWORD2(v349) = v29;
          v30 = v29;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v31 = *(_DWORD *)(a1 + 136) ^ v29;
            DWORD2(v349) = v31;
            v30 = v31;
            if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
            {
              RtlpLogHeapFailure(3, a1, v28 - 16, 0, 0LL, 0LL);
              v30 = v31;
            }
          }
          v304 = v261 - v30;
          if ( v304 <= 0 )
          {
            v22 = (_QWORD *)*v23;
          }
          else if ( !*i && j == *((_DWORD *)i + 2) - 1 )
          {
            if ( *((_DWORD *)i + 3) )
              v21 = (unsigned int)(2 * v21);
            v278 = v21;
            for ( k = *(_QWORD **)(i[6] + 8 * v21); v23 != k; k = (_QWORD *)*k )
            {
              v350 = 0LL;
              v112 = *((_DWORD *)k - 2);
              v305 = v112;
              v306 = v112;
              DWORD2(v350) = v112;
              v113 = v112;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v114 = *(_DWORD *)(a1 + 136) ^ v112;
                DWORD2(v350) = v114;
                v113 = v114;
                if ( HIBYTE(v114) != ((unsigned __int8)v114 ^ (unsigned __int8)(BYTE1(v114) ^ BYTE2(v114))) )
                {
                  RtlpLogHeapFailure(3, a1, (_DWORD)k - 16, 0, 0LL, 0LL);
                  v113 = v114;
                }
              }
              v307 = v261 - v113;
              if ( v307 <= 0 )
              {
                v22 = k;
                break;
              }
            }
          }
          else
          {
            v273 = 0LL;
            v32 = (unsigned int)v21 >> 5;
            v33 = ((unsigned int)(*((_DWORD *)i + 2) - *((_DWORD *)i + 6)) >> 5) - 1;
            v34 = (unsigned int *)(i[5] + 4 * v32);
            v273 = v34;
            v35 = *v34 & (-1 << (v21 & 0x1F));
            while ( !v35 )
            {
              if ( (unsigned int)v32 > v33 )
              {
                v22 = 0LL;
                goto LABEL_48;
              }
              v273 = ++v34;
              v35 = *v34;
              LODWORD(v32) = v32 + 1;
            }
            if ( (_WORD)v35 )
            {
              if ( (_BYTE)v35 )
                v36 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v35];
              else
                v36 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v35)] + 8;
            }
            else if ( (v35 & 0xFF0000) != 0 )
            {
              v36 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v35)] + 16;
            }
            else
            {
              v36 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v35 >> 24] + 24;
            }
            v37 = (unsigned int)(v36 + 32 * v32);
            if ( *((_DWORD *)i + 3) )
              v37 = (unsigned int)(2 * v37);
            v308 = v37;
            v22 = *(_QWORD **)(i[6] + 8 * v37);
          }
        }
      }
LABEL_48:
      v357 = v22;
      if ( v22 )
        break;
      i = (__int64 *)*i;
      v20 = *((_DWORD *)i + 6);
    }
    v358 = v22;
    v323 = v22;
    if ( v274 != v22 )
    {
      v38 = (__int64)(v22 - 2);
      v276 = v22 - 2;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v22 - 2) ^= *(_DWORD *)(a1 + 136);
        if ( *((_BYTE *)v22 - 5) != ((unsigned __int8)*((_DWORD *)v22 - 2) ^ (unsigned __int8)(BYTE1(*((_DWORD *)v22 - 2)) ^ HIWORD(*((_DWORD *)v22 - 2)))) )
          RtlpAnalyzeHeapFailure(a1, v22 - 2);
      }
      v39 = *((unsigned __int16 *)v22 - 4);
      if ( v39 >= v11 )
      {
        v40 = *v22;
        v263 = *v22;
        v41 = (__int64 *)v22[1];
        v255 = v41;
        v42 = *(_QWORD *)(*v22 + 8LL);
        v43 = *v41;
        if ( (_QWORD *)*v41 != v22 || v43 != v42 )
        {
          RtlpLogHeapFailure(13, a1, (_DWORD)v22, v42, v43, 0LL);
          goto LABEL_177;
        }
        *(_QWORD *)(a1 + 192) -= v39;
        v44 = *(__int64 **)(a1 + 312);
        if ( v44 )
        {
          v45 = *((unsigned __int16 *)v22 - 4);
          while ( 1 )
          {
            v46 = *((unsigned int *)v44 + 2);
            if ( v45 < v46 )
            {
              v47 = v46 - 1;
              goto LABEL_63;
            }
            if ( !*v44 )
              break;
            v44 = (__int64 *)*v44;
          }
          v47 = v46 - 1;
          LODWORD(v45) = v46 - 1;
LABEL_63:
          v324 = v44;
          v264 = *(unsigned __int16 *)(v38 + 8);
          v48 = v45 - *((_DWORD *)v44 + 6);
          v49 = 2 * v48;
          if ( !*((_DWORD *)v44 + 3) )
            v49 = v48;
          v253 = v49;
          v309 = v49;
          v259 = (_QWORD *)(v44[6] + 8 * v49);
          v50 = (_QWORD *)*v259;
          --*((_DWORD *)v44 + 4);
          if ( (_DWORD)v45 == v47 )
            --*((_DWORD *)v44 + 5);
          if ( v50 == v22 )
          {
            if ( !*v44 )
              LODWORD(v46) = v47;
            v51 = *v22;
            v52 = v44[4];
            if ( (unsigned int)v45 >= (unsigned int)v46 )
            {
              if ( v51 != v52 )
              {
                *v259 = v51;
                goto LABEL_78;
              }
              *v259 = 0LL;
              v56 = (_DWORD *)(v44[5] + 4 * ((unsigned __int64)v48 >> 5));
            }
            else
            {
              if ( v51 != v52 )
              {
                v351 = 0LL;
                v53 = *(_DWORD *)(v51 - 8);
                v310 = v53;
                v311 = v53;
                DWORD2(v351) = v53;
                v54 = v53;
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v55 = *(_DWORD *)(a1 + 136) ^ v53;
                  DWORD2(v351) = v55;
                  v54 = v55;
                  if ( HIBYTE(v55) != ((unsigned __int8)v55 ^ (unsigned __int8)(BYTE1(v55) ^ BYTE2(v55))) )
                  {
                    RtlpLogHeapFailure(3, a1, v51 - 16, 0, 0LL, 0LL);
                    v54 = v55;
                    v40 = v263;
                    v41 = v255;
                    LODWORD(v49) = v253;
                  }
                }
                v312 = v264 - v54;
                if ( v264 == v54 )
                {
                  *(_QWORD *)(v44[6] + 8LL * (unsigned int)v49) = v51;
                  goto LABEL_78;
                }
              }
              *(_QWORD *)(v44[6] + 8LL * (unsigned int)v49) = 0LL;
              v56 = (_DWORD *)(v44[5] + 4 * ((unsigned __int64)v48 >> 5));
            }
            *v56 &= ~(1 << (v48 & 0x1F));
          }
        }
LABEL_78:
        *v41 = v40;
        *(_QWORD *)(v40 + 8) = v41;
        if ( (*(_BYTE *)(v38 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
        {
LABEL_293:
          LOBYTE(v159) = 1;
          RtlpDeCommitFreeBlock(a1, v38, *(unsigned __int16 *)(v38 + 8), v159);
          v108 = v237;
          goto LABEL_164;
        }
LABEL_79:
        v57 = *(_BYTE *)(v38 + 10);
        v58 = v242;
        if ( !v242 && (v57 & 4) != 0 )
        {
          v59 = 16LL * *(unsigned __int16 *)(v38 + 8) - 32;
          if ( (v57 & 2) != 0 && v59 > 4 )
            v59 = 16LL * *(unsigned __int16 *)(v38 + 8) - 36;
          v60 = RtlCompareMemoryUlong((PVOID)(v38 + 32), v59, 0xFEEEFEEE);
          if ( v60 != v59 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v38,
              (const void *)(v60 + v38 + 32));
            if ( NtCurrentPeb()->BeingDebugged )
            {
              RtlpHeapInvalidBadAddress = v38;
              __debugbreak();
              RtlpHeapInvalidBreakPoint = 0;
            }
          }
          v58 = 0;
        }
        v327 = v38;
        if ( (*(_BYTE *)(v38 + 10) & 1) != 0 )
        {
          RtlpLogHeapFailure(3, a1, v38, 0, 0LL, 0LL);
          v108 = v237;
          goto LABEL_164;
        }
        *(_BYTE *)(v38 + 10) = v238;
        v61 = *(unsigned __int16 *)(v38 + 8) - v11;
        v328 = v61;
        *(_WORD *)(v38 + 8) = v11;
        v62 = (unsigned __int64)v375;
        v63 = v243 - (_QWORD)v375;
        v359 = v243 - (_QWORD)v375;
        if ( v243 - (unsigned __int64)v375 >= 0x3F )
        {
          *(_QWORD *)(v38 + 16 * v11) = v63;
          *(_BYTE *)(v38 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v38 + 15) = v63;
        }
        *(_BYTE *)(v38 + 11) = 0;
        if ( v61 )
        {
          if ( v61 != 1 )
          {
            v64 = v58 == 0;
            v239 = v58 == 0;
            v313 = v58 == 0;
            v65 = *(unsigned __int8 *)(v38 + 14);
            if ( (_BYTE)v65 )
            {
              v66 = (v38 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v65) << 16);
              v329 = v66;
            }
            else
            {
              v329 = a1;
              v66 = a1;
            }
            v337 = v61;
            v67 = v38 + 16 * v11;
            v246 = 0;
            *(_BYTE *)(v67 + 10) = v57;
            *(_BYTE *)(v67 + 15) = 0;
            *(_WORD *)(v67 + 12) = *(_WORD *)(a1 + 140) ^ v11;
            v68 = *(_QWORD *)(v66 + 40);
            if ( v68 == v66 )
            {
              LOBYTE(v69) = 0;
            }
            else
            {
              v69 = ((v67 - v66) >> 16) + 1;
              if ( v69 >= 0xFE )
              {
                RtlpLogHeapFailure(3, v68, v67, v66, 0LL, 0LL);
                v64 = v239;
              }
            }
            *(_BYTE *)(v67 + 14) = v69;
            *(_BYTE *)(v67 + 11) = 0;
            *(_WORD *)(v67 + 8) = v61;
            while ( 1 )
            {
              v70 = v67 + 16 * v61;
              if ( ((*(_BYTE *)(v70 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
              {
                *(_WORD *)(v70 + 12) = *(_WORD *)(a1 + 140) ^ v61;
                if ( !v64 )
                {
                  v71 = (unsigned __int16)v61;
                  v361 = (unsigned __int16)v61;
                  *(_BYTE *)(v67 + 10) = 0;
                  *(_BYTE *)(v67 + 15) = 0;
                  v72 = (_QWORD *)(a1 + 336);
                  v73 = *(__int64 **)(a1 + 312);
                  if ( v73 )
                  {
                    while ( 1 )
                    {
                      v74 = *((unsigned int *)v73 + 2);
                      if ( (unsigned __int16)v61 < v74 )
                      {
                        v75 = (unsigned __int16)v61;
                        goto LABEL_108;
                      }
                      if ( !*v73 )
                        break;
                      v73 = (__int64 *)*v73;
                    }
                    v75 = v74 - 1;
LABEL_108:
                    for ( m = v75; ; m = v75 )
                    {
                      v240 = v75 - *((_DWORD *)v73 + 6);
                      v76 = 0LL;
                      v77 = (_QWORD *)v73[4];
                      v247 = v77;
                      v78 = (_QWORD *)v77[1];
                      if ( v77 == v78 )
                      {
                        v76 = (_QWORD *)v73[4];
                      }
                      else
                      {
                        v352 = 0LL;
                        v79 = *((_DWORD *)v78 - 2);
                        v314 = v79;
                        v315 = v79;
                        DWORD2(v352) = v79;
                        v80 = v79;
                        if ( *(_DWORD *)(a1 + 124) )
                        {
                          v81 = *(_DWORD *)(a1 + 136) ^ v79;
                          DWORD2(v352) = v81;
                          v80 = v81;
                          if ( HIBYTE(v81) != ((unsigned __int8)v81 ^ (unsigned __int8)(BYTE1(v81) ^ BYTE2(v81))) )
                          {
                            RtlpLogHeapFailure(3, a1, (_DWORD)v78 - 16, 0, 0LL, 0LL);
                            v80 = v81;
                            v77 = v247;
                          }
                        }
                        v316 = v71 - v80;
                        if ( v316 > 0 )
                        {
                          v76 = v77;
                        }
                        else
                        {
                          v82 = *v77;
                          v353 = 0LL;
                          v83 = *(_DWORD *)(v82 - 8);
                          v317 = v83;
                          v318 = v83;
                          DWORD2(v353) = v83;
                          v84 = v83;
                          if ( *(_DWORD *)(a1 + 124) )
                          {
                            v85 = *(_DWORD *)(a1 + 136) ^ v83;
                            DWORD2(v353) = v85;
                            v84 = v85;
                            if ( HIBYTE(v85) != ((unsigned __int8)v85 ^ (unsigned __int8)(BYTE1(v85) ^ BYTE2(v85))) )
                            {
                              RtlpLogHeapFailure(3, a1, v82 - 16, 0, 0LL, 0LL);
                              v84 = v85;
                              v77 = v247;
                            }
                          }
                          v319 = v71 - v84;
                          if ( v319 <= 0 )
                          {
                            v76 = (_QWORD *)*v77;
                          }
                          else if ( !*v73 && m == *((_DWORD *)v73 + 2) - 1 )
                          {
                            v117 = *((_DWORD *)v73 + 3) ? 2 * v240 : v240;
                            v321 = v117;
                            for ( n = *(_QWORD **)(v73[6] + 8 * v117); ; n = (_QWORD *)*n )
                            {
                              v245 = n;
                              if ( v77 == n )
                                break;
                              v354 = 0LL;
                              v119 = *((_DWORD *)n - 2);
                              v325 = v119;
                              v330 = v119;
                              DWORD2(v354) = v119;
                              v120 = v119;
                              if ( *(_DWORD *)(a1 + 124) )
                              {
                                v121 = *(_DWORD *)(a1 + 136) ^ v119;
                                DWORD2(v354) = v121;
                                v120 = v121;
                                if ( HIBYTE(v121) != ((unsigned __int8)v121 ^ (unsigned __int8)(BYTE1(v121) ^ BYTE2(v121))) )
                                {
                                  RtlpLogHeapFailure(3, a1, (_DWORD)n - 16, 0, 0LL, 0LL);
                                  v120 = v121;
                                  v77 = v247;
                                }
                                n = v245;
                              }
                              v331 = v71 - v120;
                              if ( v331 <= 0 )
                              {
                                v76 = n;
                                break;
                              }
                            }
                          }
                          else
                          {
                            v271 = 0LL;
                            v86 = v240 >> 5;
                            v87 = ((unsigned int)(*((_DWORD *)v73 + 2) - *((_DWORD *)v73 + 6)) >> 5) - 1;
                            v88 = (unsigned int *)(v73[5] + 4 * v86);
                            v271 = v88;
                            v89 = *v88 & (-1 << (v240 & 0x1F));
                            while ( !v89 )
                            {
                              if ( (unsigned int)v86 > v87 )
                              {
                                v76 = 0LL;
                                goto LABEL_128;
                              }
                              v271 = ++v88;
                              v89 = *v88;
                              LODWORD(v86) = v86 + 1;
                            }
                            if ( (_WORD)v89 )
                            {
                              if ( (_BYTE)v89 )
                                v90 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v89];
                              else
                                v90 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v89)] + 8;
                            }
                            else if ( (v89 & 0xFF0000) != 0 )
                            {
                              v90 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v89)] + 16;
                            }
                            else
                            {
                              v90 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v89 >> 24] + 24;
                            }
                            v91 = (unsigned int)(v90 + 32 * v86);
                            if ( *((_DWORD *)v73 + 3) )
                              v91 = (unsigned int)(2 * v91);
                            v332 = v91;
                            v76 = *(_QWORD **)(v73[6] + 8 * v91);
                          }
                        }
                      }
LABEL_128:
                      v362 = v76;
                      if ( v76 )
                        break;
                      v73 = (__int64 *)*v73;
                      v75 = *((_DWORD *)v73 + 6);
                    }
                    v344 = v76;
                    v72 = (_QWORD *)(a1 + 336);
                  }
                  else
                  {
                    v76 = (_QWORD *)*v72;
                  }
                  while ( v72 != v76 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v92 = *((_DWORD *)v76 - 2);
                      v333 = v92;
                      v335 = v92;
                      v370 = v92;
                      if ( (v92 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v92 ^= *(_DWORD *)(a1 + 136);
                        v370 = v92;
                      }
                      v93 = v92;
                    }
                    else
                    {
                      v93 = *((_WORD *)v76 - 4);
                    }
                    if ( v71 <= v93 )
                      break;
                    v76 = (_QWORD *)*v76;
                    v72 = (_QWORD *)(a1 + 336);
                  }
                  v94 = (_QWORD *)(v67 + 16);
                  v95 = (__int64 *)v76[1];
                  if ( (_QWORD *)*v95 == v76 )
                  {
                    *v94 = v76;
                    *(_QWORD *)(v67 + 24) = v95;
                    *v95 = (__int64)v94;
                    v76[1] = v94;
                  }
                  else
                  {
                    RtlpLogHeapFailure(13, 0, (_DWORD)v76, 0, *v95, 0LL);
                  }
                  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
                  v96 = *(__int64 **)(a1 + 312);
                  if ( v96 )
                  {
                    v97 = *(unsigned __int16 *)(v67 + 8);
                    while ( 1 )
                    {
                      v98 = *((unsigned int *)v96 + 2);
                      if ( v97 < v98 )
                      {
                        v99 = v98 - 1;
                        goto LABEL_144;
                      }
                      if ( !*v96 )
                        break;
                      v96 = (__int64 *)*v96;
                    }
                    v99 = v98 - 1;
                    LODWORD(v97) = v98 - 1;
LABEL_144:
                    v100 = *(unsigned __int16 *)(v67 + 8);
                    v268 = v100;
                    v101 = v97 - *((_DWORD *)v96 + 6);
                    v102 = 2 * v101;
                    if ( !*((_DWORD *)v96 + 3) )
                      v102 = v101;
                    v301 = v102;
                    ++*((_DWORD *)v96 + 4);
                    v103 = *(_QWORD *)(v96[6] + 8 * v102);
                    v265 = v103;
                    if ( (_DWORD)v97 == v99 )
                      ++*((_DWORD *)v96 + 5);
                    if ( !v103 )
                      goto LABEL_149;
                    v355 = 0LL;
                    v115 = *(_DWORD *)(v103 - 16 + 8);
                    v279 = v115;
                    v280 = v115;
                    DWORD2(v355) = v115;
                    v116 = v115;
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      DWORD2(v355) = *(_DWORD *)(a1 + 136) ^ v115;
                      v116 = WORD4(v355);
                      if ( BYTE11(v355) != (BYTE8(v355) ^ (unsigned __int8)(BYTE9(v355) ^ BYTE10(v355))) )
                      {
                        RtlpLogHeapFailure(3, a1, v103 - 16, 0, 0LL, 0LL);
                        v116 = WORD4(v355);
                        v103 = v265;
                        v100 = v268;
                      }
                    }
                    v281 = v100 - v116;
                    if ( v281 <= 0 )
LABEL_149:
                      *(_QWORD *)(v96[6] + 8 * v102) = v94;
                    if ( !v103 )
                    {
                      v104 = (_DWORD *)(v96[5] + 4 * ((unsigned __int64)v101 >> 5));
                      *v104 |= 1 << (v101 & 0x1F);
                    }
                  }
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_BYTE *)(v67 + 11) = *(_BYTE *)(v67 + 8) ^ *(_BYTE *)(v67 + 9) ^ *(_BYTE *)(v67 + 10);
                    *(_DWORD *)(v67 + 8) ^= *(_DWORD *)(a1 + 136);
                  }
                  goto LABEL_154;
                }
                *(_BYTE *)(v67 + 10) &= 0xF0u;
                *(_BYTE *)(v67 + 15) = 0;
                if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
                {
                  v183 = (_DWORD *)(v67 + 32);
                  v334 = v67 + 32;
                  v184 = (16 * (unsigned __int64)(unsigned __int16)v61 - 32) >> 2;
                  v272 = v184;
                  if ( v184 )
                  {
                    if ( ((unsigned __int8)v183 & 4) != 0 )
                    {
                      *v183 = -17891602;
                      v272 = --v184;
                      if ( v184 )
                      {
                        v183 = (_DWORD *)(v67 + 36);
                        v334 = v67 + 36;
                        goto LABEL_339;
                      }
                    }
                    else
                    {
LABEL_339:
                      memset64(v183, 0xFEEEFEEEFEEEFEEEuLL, v184 >> 1);
                      if ( (v184 & 1) != 0 )
                        v183[v184 - 1] = -17891602;
                    }
                  }
                  *(_BYTE *)(v67 + 10) |= 4u;
                }
                v185 = (_QWORD *)(a1 + 336);
                if ( *(_QWORD *)(a1 + 312) )
                  Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v61);
                else
                  Entry = (_QWORD *)*v185;
                while ( v185 != Entry )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v198 = *((_DWORD *)Entry - 2);
                    v282 = v198;
                    v283 = v198;
                    v371 = v198;
                    if ( (v198 & *(_DWORD *)(a1 + 124)) != 0 )
                    {
                      v198 ^= *(_DWORD *)(a1 + 136);
                      v371 = v198;
                    }
                    v199 = v198;
                  }
                  else
                  {
                    v199 = *((_WORD *)Entry - 4);
                  }
                  if ( (unsigned __int16)v61 <= (unsigned __int64)v199 )
                    break;
                  Entry = (_QWORD *)*Entry;
                }
                v187 = (_QWORD *)(v67 + 16);
                v188 = (__int64 *)Entry[1];
                if ( (_QWORD *)*v188 == Entry )
                {
                  *v187 = Entry;
                  *(_QWORD *)(v67 + 24) = v188;
                  *v188 = (__int64)v187;
                  Entry[1] = v187;
                }
                else
                {
                  RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v188, 0LL);
                }
                *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
                v189 = *(__int64 ***)(a1 + 312);
                if ( v189 )
                {
                  v190 = *(unsigned __int16 *)(v67 + 8);
                  while ( 1 )
                  {
                    v191 = *((unsigned int *)v189 + 2);
                    if ( v190 < v191 )
                      break;
                    if ( !*v189 )
                    {
                      LODWORD(v190) = v191 - 1;
                      break;
                    }
                    v189 = (__int64 **)*v189;
                  }
                  LOBYTE(Entry) = 1;
                  RtlpHeapAddListEntry(a1, (_DWORD)v189, (_DWORD)Entry, v67 + 16, v190, *(unsigned __int16 *)(v67 + 8));
                }
                if ( *(_DWORD *)(a1 + 124) )
                {
                  *(_BYTE *)(v67 + 11) = *(_BYTE *)(v67 + 8) ^ *(_BYTE *)(v67 + 9) ^ *(_BYTE *)(v67 + 10);
                  *(_DWORD *)(v67 + 8) ^= *(_DWORD *)(a1 + 136);
                }
                goto LABEL_154;
              }
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_DWORD *)(v70 + 8) ^= *(_DWORD *)(a1 + 136);
                if ( HIBYTE(*(_DWORD *)(v70 + 8)) != ((unsigned __int8)*(_DWORD *)(v70 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v70 + 8)) ^ HIWORD(*(_DWORD *)(v70 + 8)))) )
                  RtlpAnalyzeHeapFailure(a1, v67 + 16 * v61);
              }
              v122 = (__int64 *)(v70 + 16);
              v123 = *(_QWORD *)(v70 + 16);
              v249 = v123;
              v124 = *(__int64 **)(v70 + 24);
              v269 = v124;
              v125 = *(_QWORD *)(v123 + 8);
              v126 = *v124;
              if ( *v124 != v70 + 16 || v126 != v125 )
              {
                RtlpLogHeapFailure(13, a1, (_DWORD)v122, v125, v126, 0LL);
                goto LABEL_305;
              }
              *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v70 + 8);
              v127 = *(__int64 **)(a1 + 312);
              if ( v127 )
              {
                v128 = *(unsigned __int16 *)(v70 + 8);
                while ( 1 )
                {
                  v129 = *((unsigned int *)v127 + 2);
                  if ( v128 < v129 )
                  {
                    v130 = v129 - 1;
                    goto LABEL_239;
                  }
                  if ( !*v127 )
                    break;
                  v127 = (__int64 *)*v127;
                }
                v130 = v129 - 1;
                LODWORD(v128) = v129 - 1;
LABEL_239:
                v336 = v127;
                v266 = *(unsigned __int16 *)(v70 + 8);
                v345 = *(unsigned __int16 *)(v70 + 8);
                v131 = v128 - *((_DWORD *)v127 + 6);
                v257 = v131;
                v132 = 2 * v131;
                if ( !*((_DWORD *)v127 + 3) )
                  v132 = v131;
                v248 = v132;
                v284 = v132;
                v251 = (__int64 **)(v127[6] + 8 * v132);
                v133 = *v251;
                --*((_DWORD *)v127 + 4);
                if ( (_DWORD)v128 == v130 )
                  --*((_DWORD *)v127 + 5);
                if ( v133 == v122 )
                {
                  if ( !*v127 )
                    LODWORD(v129) = v130;
                  v134 = (__int64 *)*v122;
                  v267 = v134;
                  if ( (unsigned int)v128 >= (unsigned int)v129 )
                  {
                    if ( v134 == (__int64 *)v127[4] )
                    {
                      *v251 = 0LL;
                      v138 = (_DWORD *)(v127[5] + 4 * ((unsigned __int64)v131 >> 5));
                      goto LABEL_254;
                    }
                    *v251 = v134;
                  }
                  else
                  {
                    if ( v134 == (__int64 *)v127[4] )
                      goto LABEL_253;
                    v356 = 0LL;
                    v135 = *((_DWORD *)v134 - 2);
                    v285 = v135;
                    v286 = v135;
                    DWORD2(v356) = v135;
                    v136 = v135;
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v137 = *(_DWORD *)(a1 + 136) ^ v135;
                      DWORD2(v356) = v137;
                      v136 = v137;
                      if ( HIBYTE(v137) != ((unsigned __int8)v137 ^ (unsigned __int8)(BYTE1(v137) ^ BYTE2(v137))) )
                      {
                        RtlpLogHeapFailure(3, a1, (_DWORD)v134 - 16, 0, 0LL, 0LL);
                        v136 = v137;
                        v123 = v249;
                        v124 = v269;
                        v134 = v267;
                      }
                    }
                    v287 = v266 - v136;
                    if ( v266 != v136 )
                    {
                      v131 = v257;
LABEL_253:
                      *(_QWORD *)(v127[6] + 8LL * v248) = 0LL;
                      v138 = (_DWORD *)(v127[5] + 4 * ((unsigned __int64)v131 >> 5));
LABEL_254:
                      *v138 &= ~(1 << (v131 & 0x1F));
                      goto LABEL_255;
                    }
                    *(_QWORD *)(v127[6] + 8LL * v248) = v134;
                  }
                }
              }
LABEL_255:
              *v124 = v123;
              *(_QWORD *)(v123 + 8) = v124;
              if ( (*(_BYTE *)(v70 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
              {
                if ( v239 )
                {
                  v139 = *(_BYTE *)(v70 + 10);
                  if ( (v139 & 4) != 0 )
                  {
                    v275 = 0LL;
                    v140 = 16LL * *(unsigned __int16 *)(v70 + 8) - 32;
                    v275 = v140;
                    if ( (v139 & 2) != 0 && v140 > 4 )
                    {
                      v140 -= 4LL;
                      v275 = v140;
                    }
                    v258 = RtlCompareMemoryUlong((PVOID)(v70 + 32), v140, 0xFEEEFEEE);
                    if ( v258 != v140 )
                    {
                      if ( NtCurrentPeb()->Ldr )
                        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                      else
                        DbgPrint("HEAP: ");
                      DbgPrint(
                        "HEAP: Free Heap block %p modified at %p after it was freed\n",
                        (const void *)(v67 + 16 * v61),
                        (const void *)(v70 + v258 + 32));
                      RtlpBreakPointHeap();
                    }
                  }
                }
                *(_BYTE *)(v67 + 10) = *(_BYTE *)(v70 + 10);
                v141 = v61 + *(unsigned __int16 *)(v70 + 8);
                v337 = v141;
                if ( v141 <= 0xFF00 )
                {
                  *(_WORD *)(v67 + 8) = v141;
                  *(_WORD *)(v67 + 16 * v141 + 12) = *(_WORD *)(a1 + 140) ^ v141;
                  v142 = (unsigned __int16)v141;
                  if ( !v239 )
                  {
                    *(_BYTE *)(v67 + 10) = 0;
                    *(_BYTE *)(v67 + 15) = 0;
                    v143 = (_QWORD *)(a1 + 336);
                    if ( *(_QWORD *)(a1 + 312) )
                      v144 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v141);
                    else
                      v144 = (_QWORD *)*v143;
                    while ( v143 != v144 )
                    {
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v145 = *((_DWORD *)v144 - 2);
                        v288 = v145;
                        v289 = v145;
                        v372 = v145;
                        if ( (v145 & *(_DWORD *)(a1 + 124)) != 0 )
                        {
                          v145 ^= *(_DWORD *)(a1 + 136);
                          v372 = v145;
                        }
                        v146 = v145;
                      }
                      else
                      {
                        v146 = *((_WORD *)v144 - 4);
                      }
                      if ( v142 <= v146 )
                        break;
                      v144 = (_QWORD *)*v144;
                    }
                    v147 = (_QWORD *)(v67 + 16);
                    v148 = (__int64 *)v144[1];
                    if ( (_QWORD *)*v148 == v144 )
                    {
                      *v147 = v144;
                      *(_QWORD *)(v67 + 24) = v148;
                      *v148 = (__int64)v147;
                      v144[1] = v147;
                    }
                    else
                    {
                      RtlpLogHeapFailure(13, 0, (_DWORD)v144, 0, *v148, 0LL);
                    }
                    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
                    v149 = *(__int64 **)(a1 + 312);
                    if ( v149 )
                    {
                      v150 = *(unsigned __int16 *)(v67 + 8);
                      while ( 1 )
                      {
                        v151 = *((unsigned int *)v149 + 2);
                        if ( v150 < v151 )
                          break;
                        if ( !*v149 )
                        {
                          LODWORD(v150) = v151 - 1;
                          break;
                        }
                        v149 = (__int64 *)*v149;
                      }
                      v338 = v149;
                      LOBYTE(v144) = 1;
                      RtlpHeapAddListEntry(
                        a1,
                        (_DWORD)v149,
                        (_DWORD)v144,
                        v67 + 16,
                        v150,
                        *(unsigned __int16 *)(v67 + 8));
                    }
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      *(_BYTE *)(v67 + 11) = *(_BYTE *)(v67 + 8) ^ *(_BYTE *)(v67 + 9) ^ *(_BYTE *)(v67 + 10);
                      *(_DWORD *)(v67 + 8) ^= *(_DWORD *)(a1 + 136);
                    }
                    goto LABEL_154;
                  }
                  *(_BYTE *)(v67 + 10) &= 0xF0u;
                  *(_BYTE *)(v67 + 15) = 0;
                  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
                  {
                    v202 = (_DWORD *)(v67 + 32);
                    v339 = v67 + 32;
                    v203 = (16 * v142 - 32) >> 2;
                    v277 = v203;
                    if ( v203 )
                    {
                      if ( ((unsigned __int8)v202 & 4) != 0 )
                      {
                        *v202 = -17891602;
                        v277 = --v203;
                        if ( v203 )
                        {
                          v202 = (_DWORD *)(v67 + 36);
                          v339 = v67 + 36;
                          goto LABEL_420;
                        }
                      }
                      else
                      {
LABEL_420:
                        memset64(v202, 0xFEEEFEEEFEEEFEEEuLL, v203 >> 1);
                        if ( (v203 & 1) != 0 )
                          v202[v203 - 1] = -17891602;
                      }
                    }
                    *(_BYTE *)(v67 + 10) |= 4u;
                  }
                  v204 = (_QWORD *)(a1 + 336);
                  if ( *(_QWORD *)(a1 + 312) )
                    v205 = (_QWORD *)RtlpFindEntry(a1, v142);
                  else
                    v205 = (_QWORD *)*v204;
                  while ( v204 != v205 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v211 = *((_DWORD *)v205 - 2);
                      v290 = v211;
                      v291 = v211;
                      v373 = v211;
                      if ( (v211 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v211 ^= *(_DWORD *)(a1 + 136);
                        v373 = v211;
                      }
                      v212 = v211;
                    }
                    else
                    {
                      v212 = *((_WORD *)v205 - 4);
                    }
                    if ( v142 <= v212 )
                      break;
                    v205 = (_QWORD *)*v205;
                  }
                  v206 = (_QWORD *)(v67 + 16);
                  v207 = (__int64 *)v205[1];
                  if ( (_QWORD *)*v207 == v205 )
                  {
                    *v206 = v205;
                    *(_QWORD *)(v67 + 24) = v207;
                    *v207 = (__int64)v206;
                    v205[1] = v206;
                  }
                  else
                  {
                    RtlpLogHeapFailure(13, 0, (_DWORD)v205, 0, *v207, 0LL);
                  }
                  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v67 + 8);
                  v208 = *(__int64 **)(a1 + 312);
                  if ( v208 )
                  {
                    v209 = *(unsigned __int16 *)(v67 + 8);
                    while ( 1 )
                    {
                      v210 = *((unsigned int *)v208 + 2);
                      if ( v209 < v210 )
                        break;
                      if ( !*v208 )
                      {
                        LODWORD(v209) = v210 - 1;
                        break;
                      }
                      v208 = (__int64 *)*v208;
                    }
                    v340 = v208;
                    LOBYTE(v210) = 1;
                    RtlpHeapAddListEntry(a1, (_DWORD)v208, v210, v67 + 16, v209, *(unsigned __int16 *)(v67 + 8));
                  }
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_BYTE *)(v67 + 11) = *(_BYTE *)(v67 + 8) ^ *(_BYTE *)(v67 + 9) ^ *(_BYTE *)(v67 + 10);
                    *(_DWORD *)(v67 + 8) ^= *(_DWORD *)(a1 + 136);
                  }
                  goto LABEL_154;
                }
                RtlpInsertFreeBlock(a1, v67);
LABEL_154:
                v62 = (unsigned __int64)v375;
                goto LABEL_155;
              }
              LOBYTE(v200) = 1;
              RtlpDeCommitFreeBlock(a1, v67 + 16 * v61, *(unsigned __int16 *)(v70 + 8), v200);
LABEL_305:
              if ( v246 )
              {
                v169 = NtCurrentTeb();
                v346 = v169;
                v169->LastStatusValue = -1073741764;
                v169->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741764);
                goto LABEL_177;
              }
              v246 = 1;
              v64 = v239;
            }
          }
          ++*(_WORD *)(v38 + 8);
          v192 = v63 + 16;
          v360 = v192;
          if ( v192 >= 0x3F )
          {
            *(_QWORD *)(v38 + 16 * (v11 + 1)) = v192;
            *(_BYTE *)(v38 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v38 + 15) = v192;
          }
        }
LABEL_155:
        v105 = (_DWORD *)(v38 + 16);
        v241 = v38 + 16;
        v106 = *(_WORD *)(v38 + 8);
        a2 = v106;
        LOWORD(a2) = HIBYTE(v106);
        v107 = 16LL * v106;
        a3 = (void *)v107;
        if ( (*(_BYTE *)(v38 + 15) & 0x3F) == 0x3F )
        {
          a3 = (void *)(v107 - 8);
          v107 -= 8LL;
        }
        if ( v242 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v38 + 11) = HIBYTE(v106) ^ *(_BYTE *)(v38 + 10) ^ v106;
            *(_DWORD *)(v38 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          v108 = v237;
          if ( v237 )
          {
            RtlpUpdateHeapWatermarks(a1, a2, a3);
            RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
            v105 = (_DWORD *)(v38 + 16);
            v108 = 0;
          }
          if ( (v374 & 8) != 0 )
            memset_thunk_772440563353939046(v105, 0, v107 - 8);
          goto LABEL_164;
        }
        if ( (v374 & 8) != 0 )
        {
          memset_thunk_772440563353939046((void *)(v38 + 16), 0, (size_t)a3 - 8);
          v194 = (_BYTE *)(a1 + 112);
          v105 = (_DWORD *)(v38 + 16);
        }
        else
        {
          v194 = (_BYTE *)(a1 + 112);
          v195 = a1 + 112;
          if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
          {
            a3 = (void *)(v38 + 16);
            v341 = v38 + 16;
            a2 = (v62 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            if ( a2 )
            {
              v196 = (_BYTE *)(a1 + 112);
              if ( ((unsigned __int8)v105 & 4) != 0 )
              {
                *v105 = -1163005939;
                if ( !--a2 )
                  goto LABEL_371;
                a3 = (void *)(v38 + 20);
                v341 = v38 + 20;
                v196 = (_BYTE *)(a1 + 112);
              }
              memset64(a3, 0xBAADF00DBAADF00DuLL, a2 >> 1);
              v194 = (_BYTE *)(a1 + 112);
              if ( (a2 & 1) != 0 )
              {
                *((_DWORD *)a3 + a2 - 1) = -1163005939;
                v194 = v196;
              }
            }
          }
        }
LABEL_371:
        if ( (*v194 & 0x20) != 0 )
        {
          *(__m128i *)((char *)v105 + v62) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          *(_BYTE *)(v38 + 10) |= 4u;
        }
        *(_BYTE *)(v38 + 11) = 0;
        if ( (*(_BYTE *)(v38 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v38, a2, a3, v195);
          v342 = ExtraStuffPointer;
          *(_OWORD *)ExtraStuffPointer = 0LL;
          if ( (*(_DWORD *)v194 & 0x8000000) != 0 )
            *(_WORD *)ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
          NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
          if ( (NtGlobalFlag & 0x800) != 0 )
            *(_WORD *)(ExtraStuffPointer + 2) = RtlpUpdateTagEntry(
                                                  a1,
                                                  (v374 >> 18) & 0xFFF,
                                                  0,
                                                  *(unsigned __int16 *)(v38 + 8),
                                                  0);
        }
        else
        {
          v293 = NtCurrentPeb()->NtGlobalFlag;
          if ( (v293 & 0x800) != 0 )
            *(_BYTE *)(v38 + 11) = RtlpUpdateTagEntry(
                                     a1,
                                     (unsigned __int8)(v374 >> 18),
                                     0,
                                     *(unsigned __int16 *)(v38 + 8),
                                     0);
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v38 + 11) = *(_BYTE *)(v38 + 8) ^ *(_BYTE *)(v38 + 9) ^ *(_BYTE *)(v38 + 10);
          *(_DWORD *)(v38 + 8) ^= *(_DWORD *)(a1 + 136);
          v108 = v237;
          goto LABEL_164;
        }
        goto LABEL_177;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v22 - 5) = BYTE1(v39) ^ *((_BYTE *)v22 - 6) ^ v39;
        *((_DWORD *)v22 - 2) ^= *(_DWORD *)(a1 + 136);
      }
    }
    v160 = RtlpExtendHeap(a1);
    v38 = v160;
    v276 = (_QWORD *)v160;
    if ( v160 )
    {
      v161 = v160 + 16;
      v162 = *(_QWORD *)(v160 + 16);
      v163 = *(__int64 **)(v160 + 24);
      v164 = *(_QWORD *)(v162 + 8);
      v165 = *v163;
      if ( *v163 != v161 || v165 != v164 )
      {
        RtlpLogHeapFailure(13, a1, v161, v164, v165, 0LL);
        v108 = v237;
        goto LABEL_164;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v38 + 8);
      v166 = *(__int64 **)(a1 + 312);
      if ( v166 )
      {
        v167 = *(unsigned __int16 *)(v38 + 8);
        while ( 1 )
        {
          v168 = *((unsigned int *)v166 + 2);
          if ( v167 < v168 )
            break;
          if ( !*v166 )
          {
            LODWORD(v167) = v168 - 1;
            break;
          }
          v166 = (__int64 *)*v166;
        }
        v326 = v166;
        v182 = v161;
        LOBYTE(v161) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v166, v161, v182, v167, *(unsigned __int16 *)(v38 + 8));
      }
      *v163 = v162;
      *(_QWORD *)(v162 + 8) = v163;
      if ( (*(_BYTE *)(v38 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
        goto LABEL_293;
      goto LABEL_79;
    }
LABEL_384:
    v109 = 0LL;
    v108 = v237;
    v110 = 0LL;
    goto LABEL_514;
  }
  v38 = (__int64)(v17 - 2);
  v276 = v17 - 2;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *((_DWORD *)v17 - 2) ^= *(_DWORD *)(a1 + 136);
    if ( *((_BYTE *)v17 - 5) != ((unsigned __int8)*((_DWORD *)v17 - 2) ^ (unsigned __int8)(BYTE1(*((_DWORD *)v17 - 2)) ^ HIWORD(*((_DWORD *)v17 - 2)))) )
      RtlpAnalyzeHeapFailure(a1, v17 - 2);
  }
  v152 = *v17;
  v252 = *v17;
  v153 = (__int64 *)v17[1];
  v250 = v153;
  v154 = *(_QWORD *)(*v17 + 8LL);
  v155 = *v153;
  if ( (_QWORD *)*v153 != v17 || v155 != v154 )
  {
    RtlpLogHeapFailure(13, a1, (_DWORD)v17, v154, v155, 0LL);
    goto LABEL_361;
  }
  *(_QWORD *)(a1 + 192) -= *((unsigned __int16 *)v17 - 4);
  v156 = *(__int64 **)(a1 + 312);
  if ( v156 )
  {
    v157 = *((unsigned __int16 *)v17 - 4);
    while ( 1 )
    {
      v158 = *((unsigned int *)v156 + 2);
      if ( v157 < v158 )
      {
        v170 = v158 - 1;
        goto LABEL_312;
      }
      if ( !*v156 )
        break;
      v156 = (__int64 *)*v156;
    }
    v170 = v158 - 1;
    LODWORD(v157) = v158 - 1;
LABEL_312:
    v171 = *(unsigned __int16 *)(v38 + 8);
    v364 = *(unsigned __int16 *)(v38 + 8);
    v172 = v157 - *((_DWORD *)v156 + 6);
    v173 = 2 * v172;
    if ( !*((_DWORD *)v156 + 3) )
      v173 = v172;
    v294 = v173;
    v174 = 8 * v173;
    v262 = 8 * v173;
    v256 = (_QWORD *)(8 * v173 + v156[6]);
    v175 = (_QWORD *)*v256;
    --*((_DWORD *)v156 + 4);
    if ( (_DWORD)v157 == v170 )
      --*((_DWORD *)v156 + 5);
    if ( v175 == v17 )
    {
      if ( !*v156 )
        LODWORD(v158) = v170;
      v176 = *v17;
      v254 = *v17;
      v177 = v156[4];
      if ( (unsigned int)v157 >= (unsigned int)v158 )
      {
        if ( v176 == v177 )
        {
          *v256 = 0LL;
          v181 = (_DWORD *)(v156[5] + 4 * ((unsigned __int64)v172 >> 5));
          goto LABEL_327;
        }
        *v256 = v176;
      }
      else
      {
        if ( v176 == v177 )
          goto LABEL_326;
        v347 = 0LL;
        v178 = *(_DWORD *)(v176 - 16 + 8);
        v295 = v178;
        v296 = v178;
        DWORD2(v347) = v178;
        v179 = v178;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v180 = *(_DWORD *)(a1 + 136) ^ v178;
          DWORD2(v347) = v180;
          if ( HIBYTE(v180) != ((unsigned __int8)v180 ^ (unsigned __int8)(BYTE1(v180) ^ BYTE2(v180))) )
          {
            RtlpLogHeapFailure(3, a1, v176 - 16, 0, 0LL, 0LL);
            v176 = v254;
            v152 = v252;
            v153 = v250;
            v174 = v262;
          }
          v179 = v180;
        }
        if ( v171 - v179 )
        {
LABEL_326:
          *(_QWORD *)(v174 + v156[6]) = 0LL;
          v181 = (_DWORD *)(v156[5] + 4 * ((unsigned __int64)v172 >> 5));
LABEL_327:
          *v181 &= ~(1 << (v172 & 0x1F));
          goto LABEL_328;
        }
        *(_QWORD *)(v174 + v156[6]) = v176;
      }
    }
  }
LABEL_328:
  *v153 = v152;
  *(_QWORD *)(v152 + 8) = v153;
  if ( (*(_BYTE *)(v38 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
    goto LABEL_79;
  LOBYTE(v201) = 1;
  RtlpDeCommitFreeBlock(a1, v38, *(unsigned __int16 *)(v38 + 8), v201);
LABEL_361:
  v193 = NtCurrentTeb();
  v365 = v193;
  v193->LastStatusValue = -1073741801;
  v193->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
LABEL_177:
  v108 = v237;
LABEL_164:
  v109 = v241;
  v110 = 0LL;
LABEL_514:
  if ( v108 )
  {
    if ( v109 && !v110 )
      RtlpUpdateHeapWatermarks(a1, a2, a3);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v233 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v233 = 2147353480LL;
  if ( *(_BYTE *)v233 && v109 )
  {
    if ( v110 )
      RtlpHeapLogRangeReserve(a1, v110 & 0xFFFFFFFFFFFF0000uLL, *(_QWORD *)(v110 + 40));
  }
  return v109;
}
