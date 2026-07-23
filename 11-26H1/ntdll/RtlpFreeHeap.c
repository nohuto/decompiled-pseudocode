/*
 * XREFs of RtlpFreeHeap @ 0x18000E4A0
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180002EDC (RtlpLogHeapFreeEvent.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpUpdateHeapWatermarks @ 0x18000C5B0 (RtlpUpdateHeapWatermarks.c)
 *     RtlpUpdateTagEntry @ 0x18000DDC8 (RtlpUpdateTagEntry.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindEntry @ 0x180015010 (RtlpFindEntry.c)
 *     RtlpAbFreeKernelEntry @ 0x180015690 (RtlpAbFreeKernelEntry.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x18006DD44 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x180095098 (RtlpLogHeapContractEvent.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v6; // r12
  unsigned int v7; // r13d
  int v8; // edi
  __int64 v9; // r8
  _DWORD *SharedData; // rcx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r14d
  struct _TEB *v15; // r10
  char *v16; // rdi
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  signed __int8 v19; // cf
  void *UniqueThread; // rax
  unsigned __int64 v21; // rdi
  __int64 *j; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  unsigned __int64 v29; // rax
  int v30; // edx
  int v31; // edi
  _WORD *v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r14
  unsigned int v36; // ecx
  __int64 v37; // r14
  unsigned int v38; // ecx
  int v39; // edi
  int v40; // r8d
  __int64 v41; // rdi
  __int64 *v42; // r15
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 *v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r9
  char v48; // r12
  char v49; // r15
  char v50; // al
  SIZE_T v51; // rdi
  SIZE_T v52; // r12
  unsigned __int64 v53; // r13
  _QWORD *v54; // rax
  __int64 *v55; // rdi
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r12
  _QWORD *v59; // r14
  _QWORD *v60; // rdx
  _QWORD *v61; // rax
  int v62; // r15d
  unsigned __int16 v63; // r13
  int v64; // eax
  __int64 v65; // r8
  int v66; // r15d
  unsigned __int16 v67; // r13
  int v68; // eax
  __int64 v69; // r8
  unsigned int v70; // r9d
  unsigned int *v71; // r10
  unsigned int v72; // edx
  int v73; // ecx
  __int64 v74; // r8
  int v75; // eax
  unsigned __int16 v76; // cx
  _QWORD *v77; // rdx
  __int64 *v78; // rax
  __int64 *v79; // r14
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  int v82; // edi
  int v83; // r8d
  unsigned int v84; // r15d
  __int64 v85; // rdx
  __int64 v86; // r13
  _DWORD *v87; // rdx
  _DWORD *v88; // rdi
  __int16 v89; // r8
  unsigned int v90; // ecx
  unsigned int v91; // eax
  int v92; // r12d
  unsigned __int16 v93; // cx
  int v94; // edi
  int v95; // r8d
  __int64 v96; // rdi
  __int64 *v97; // r15
  __int64 v98; // r9
  __int64 v99; // rax
  __int64 *v100; // rdx
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rax
  _QWORD *k; // r12
  int v104; // r15d
  unsigned __int16 v105; // r8
  char v106; // r15
  char v107; // al
  SIZE_T v108; // rdi
  SIZE_T v109; // r12
  __int64 v110; // r9
  __int64 v111; // rsi
  __int64 v112; // r14
  __int64 v113; // rax
  __int64 *v114; // rcx
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rdi
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // rcx
  unsigned __int16 v122; // cx
  __int64 v123; // r14
  __int64 v124; // r8
  unsigned __int64 v125; // r14
  _DWORD *v126; // r8
  unsigned __int64 v127; // rdx
  _QWORD *v128; // rdi
  _QWORD *Entry; // r8
  _QWORD *v130; // rdi
  __int64 *v131; // rax
  __int64 *v132; // rdx
  unsigned __int64 v133; // rcx
  unsigned __int64 v134; // r8
  __int64 v135; // r9
  int v136; // eax
  unsigned __int16 v137; // cx
  struct _TEB *v138; // rdi
  unsigned int v139; // r8d
  unsigned int v140; // edx
  _DWORD *v141; // rax
  unsigned __int64 v143; // rcx
  _DWORD *v144; // rdi
  char v145; // [rsp+40h] [rbp-2C8h]
  char v146; // [rsp+41h] [rbp-2C7h]
  __int16 updated; // [rsp+48h] [rbp-2C0h]
  unsigned __int64 v148; // [rsp+50h] [rbp-2B8h] BYREF
  char v149; // [rsp+58h] [rbp-2B0h]
  char v150; // [rsp+59h] [rbp-2AFh]
  char v151; // [rsp+60h] [rbp-2A8h]
  __int16 v152; // [rsp+68h] [rbp-2A0h]
  char v153; // [rsp+6Ah] [rbp-29Eh]
  char v155; // [rsp+6Dh] [rbp-29Bh]
  char v156; // [rsp+6Eh] [rbp-29Ah]
  bool v157; // [rsp+6Fh] [rbp-299h]
  char v159; // [rsp+71h] [rbp-297h]
  char v160; // [rsp+72h] [rbp-296h]
  char v161; // [rsp+73h] [rbp-295h]
  char v162; // [rsp+74h] [rbp-294h]
  char v163; // [rsp+76h] [rbp-292h]
  char v164; // [rsp+77h] [rbp-291h]
  char v165; // [rsp+78h] [rbp-290h]
  char v167; // [rsp+7Ah] [rbp-28Eh]
  char v168; // [rsp+7Bh] [rbp-28Dh]
  char v169; // [rsp+7Ch] [rbp-28Ch]
  bool v170; // [rsp+7Dh] [rbp-28Bh]
  char v171; // [rsp+7Eh] [rbp-28Ah]
  char v172; // [rsp+7Fh] [rbp-289h]
  __int16 v173; // [rsp+80h] [rbp-288h]
  _QWORD *v174; // [rsp+88h] [rbp-280h]
  unsigned int v175; // [rsp+90h] [rbp-278h]
  char v176; // [rsp+94h] [rbp-274h]
  unsigned int v177; // [rsp+98h] [rbp-270h]
  __int64 v178; // [rsp+A0h] [rbp-268h]
  __int64 v179; // [rsp+A8h] [rbp-260h]
  __int16 v180; // [rsp+B0h] [rbp-258h]
  __int16 v181; // [rsp+B2h] [rbp-256h]
  unsigned __int16 v182; // [rsp+B4h] [rbp-254h]
  __int16 v183; // [rsp+B6h] [rbp-252h]
  int v185; // [rsp+BCh] [rbp-24Ch]
  int v186; // [rsp+C0h] [rbp-248h]
  __int16 v187; // [rsp+C4h] [rbp-244h]
  unsigned __int64 v188; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v189; // [rsp+D0h] [rbp-238h]
  __int16 v190; // [rsp+D8h] [rbp-230h]
  int v191; // [rsp+DCh] [rbp-22Ch]
  unsigned __int64 v192; // [rsp+E8h] [rbp-220h]
  SIZE_T v193; // [rsp+F0h] [rbp-218h]
  unsigned __int64 v194; // [rsp+F8h] [rbp-210h]
  unsigned int *v195; // [rsp+100h] [rbp-208h]
  unsigned __int64 v196; // [rsp+108h] [rbp-200h]
  unsigned __int64 v197; // [rsp+110h] [rbp-1F8h]
  unsigned __int64 v198; // [rsp+118h] [rbp-1F0h]
  char *v199; // [rsp+120h] [rbp-1E8h]
  SIZE_T v200; // [rsp+128h] [rbp-1E0h]
  unsigned int NtGlobalFlag; // [rsp+138h] [rbp-1D0h]
  int v202; // [rsp+13Ch] [rbp-1CCh]
  int v203; // [rsp+140h] [rbp-1C8h]
  int v204; // [rsp+144h] [rbp-1C4h]
  int v205; // [rsp+148h] [rbp-1C0h]
  int v206; // [rsp+14Ch] [rbp-1BCh]
  int v207; // [rsp+150h] [rbp-1B8h]
  int v208; // [rsp+154h] [rbp-1B4h]
  int v209; // [rsp+158h] [rbp-1B0h]
  int v210; // [rsp+15Ch] [rbp-1ACh]
  int v211; // [rsp+160h] [rbp-1A8h]
  int v212; // [rsp+164h] [rbp-1A4h]
  int v213; // [rsp+168h] [rbp-1A0h]
  int v214; // [rsp+16Ch] [rbp-19Ch]
  int v215; // [rsp+170h] [rbp-198h]
  int v216; // [rsp+174h] [rbp-194h]
  int v217; // [rsp+178h] [rbp-190h]
  int v218; // [rsp+17Ch] [rbp-18Ch]
  int v219; // [rsp+180h] [rbp-188h]
  int v220; // [rsp+184h] [rbp-184h]
  int v221; // [rsp+188h] [rbp-180h]
  char *v222; // [rsp+190h] [rbp-178h]
  __int64 *v223; // [rsp+198h] [rbp-170h]
  __int64 v224; // [rsp+1A0h] [rbp-168h]
  __int64 v225; // [rsp+1A8h] [rbp-160h]
  __int64 v226; // [rsp+1B0h] [rbp-158h]
  __int64 *v227; // [rsp+1B8h] [rbp-150h]
  __int64 v228; // [rsp+1C0h] [rbp-148h]
  __int64 *v229; // [rsp+1D0h] [rbp-138h]
  __int64 *v230; // [rsp+1D8h] [rbp-130h]
  __int64 *v231; // [rsp+1E0h] [rbp-128h]
  __int64 v232; // [rsp+1E8h] [rbp-120h]
  __int64 v233; // [rsp+1F0h] [rbp-118h]
  __int64 *v234; // [rsp+1F8h] [rbp-110h]
  __int64 v235; // [rsp+200h] [rbp-108h]
  __int64 v236; // [rsp+208h] [rbp-100h]
  __int64 v237; // [rsp+210h] [rbp-F8h]
  unsigned __int64 v238; // [rsp+218h] [rbp-F0h]
  _QWORD *v239; // [rsp+220h] [rbp-E8h]
  __int128 v240; // [rsp+228h] [rbp-E0h]
  struct _TEB *v241; // [rsp+238h] [rbp-D0h]
  char *v242; // [rsp+240h] [rbp-C8h]
  struct _TEB *v243; // [rsp+248h] [rbp-C0h]
  __int64 v244; // [rsp+250h] [rbp-B8h]
  _QWORD *v245; // [rsp+258h] [rbp-B0h]
  struct _TEB *v246; // [rsp+260h] [rbp-A8h]
  unsigned __int64 v247; // [rsp+268h] [rbp-A0h]
  char *v248; // [rsp+270h] [rbp-98h]
  int v249; // [rsp+280h] [rbp-88h]
  int v250; // [rsp+290h] [rbp-78h]
  int v251; // [rsp+2A0h] [rbp-68h]
  int v252; // [rsp+2B0h] [rbp-58h]
  int v253; // [rsp+2C0h] [rbp-48h]
  int v254; // [rsp+2D0h] [rbp-38h]

  v4 = a3;
  v6 = 1;
  v146 = 1;
  v148 = 0LL;
  v145 = 0;
  v225 = 0LL;
  v7 = 1;
  v186 = 1;
  v235 = 0LL;
  v236 = 0LL;
  v188 = 0LL;
  v191 = 0;
  v237 = 0LL;
  updated = 0;
  v226 = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v146 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(a1);
  }
  else
  {
    v9 = 3LL;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    v11 = 2147353472LL;
  }
  else
  {
    v11 = 2147353472LL;
    v12 = 2147353472LL;
  }
  if ( *(_BYTE *)v12
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && ((*(_BYTE *)(v4 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
  {
    RtlpLogHeapFreeEvent(a1, a4, v9);
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      v176 = *(_DWORD *)(v4 + 8) ^ BYTE1(*(_DWORD *)(v4 + 8)) ^ HIWORD(*(_DWORD *)(v4 + 8));
      if ( *(_BYTE *)(v4 + 11) != v176 )
        RtlpAnalyzeHeapFailure(a1, v4);
    }
    goto LABEL_33;
  }
  v13 = *(_QWORD *)(a1 + 352);
  v14 = 0;
  v15 = NtCurrentTeb();
  v246 = v15;
  v222 = 0LL;
  v177 = 0;
  v16 = 0LL;
  v199 = 0LL;
  v241 = v15;
  SchedulerSharedDataSlot = (char *)v15->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; ; ++i )
    {
      v177 = i;
      if ( i >= 8 )
        break;
      v9 = (__int64)&SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v9 )
      {
        v16 = &SchedulerSharedDataSlot[8 * i];
        v199 = v16;
        break;
      }
    }
  }
  v242 = v16;
  v222 = v16;
  if ( v16 )
    *(_QWORD *)v16 = v13;
  v248 = v16;
  v19 = _interlockedbittestandreset((volatile signed __int32 *)(v13 + 8), 0);
  UniqueThread = v15->ClientId.UniqueThread;
  if ( v19 )
  {
    *(_QWORD *)(v13 + 16) = UniqueThread;
    *(_DWORD *)(v13 + 12) = 1;
    v185 = 1;
  }
  else
  {
    if ( *(void **)(v13 + 16) == UniqueThread )
    {
      ++*(_DWORD *)(v13 + 12);
      v14 = 1;
    }
    if ( v16 )
    {
      *v16 |= 2u;
      if ( v16[7] < 0 )
        RtlpAbFreeKernelEntry(v16, v13, v9);
      *(_QWORD *)v16 = 0LL;
    }
    v185 = v14;
    if ( !v14 )
    {
      v170 = byte_1801CA908 != 0;
      if ( byte_1801CA908 )
      {
        v149 = 0;
        v138 = NtCurrentTeb();
        v243 = v138;
        v138->LastStatusValue = -1073741420;
        v138->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
        v7 = 0;
        v186 = 0;
        v48 = 0;
        goto LABEL_301;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v90 = *(_DWORD *)(a1 + 616) + 1;
      *(_DWORD *)(a1 + 616) = v90;
      v91 = *(_DWORD *)(a1 + 620) + 1;
      *(_DWORD *)(a1 + 620) = v91;
      if ( *(_BYTE *)(a1 + 418) != 2 )
      {
        if ( v90 < v91 )
        {
          v91 = 0;
          *(_QWORD *)(a1 + 616) = 0LL;
          v90 = 0;
        }
        if ( v91 >= v90 >> 4 )
          *(_DWORD *)(a1 + 120) |= 0x20000000u;
      }
      goto LABEL_19;
    }
  }
  ++*(_DWORD *)(a1 + 616);
LABEL_19:
  v149 = 1;
  v145 = 1;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
    v171 = *(_DWORD *)(v4 + 8) ^ BYTE1(*(_DWORD *)(v4 + 8)) ^ HIWORD(*(_DWORD *)(v4 + 8));
    if ( *(_BYTE *)(v4 + 11) != v171 )
      RtlpAnalyzeHeapFailure(a1, v4);
  }
  v21 = *(unsigned __int16 *)(v4 + 8);
  for ( j = *(__int64 **)(a1 + 312); ; j = (__int64 *)*j )
  {
    v23 = *((unsigned int *)j + 2);
    if ( v21 < v23 )
    {
      v24 = *(unsigned __int16 *)(v4 + 8);
      goto LABEL_27;
    }
    if ( !*j )
      break;
  }
  v24 = (unsigned int)(v23 - 1);
LABEL_27:
  v223 = j;
  if ( v24 < v23 && v21 == v24 )
  {
    v25 = v21 - *((unsigned int *)j + 6);
    v26 = 2 * v25;
    if ( !*((_DWORD *)j + 3) )
      v26 = v25;
    v27 = j[6] + 8 * v26;
    v224 = v27;
  }
  else
  {
    v27 = 0LL;
    v224 = 0LL;
  }
  v225 = v27;
LABEL_33:
  v28 = *(_BYTE *)(v4 + 10);
  if ( (v28 & 8) != 0 )
    *(_BYTE *)(v4 + 10) = v28 & 0xF7;
  if ( *(_BYTE *)(v4 + 15) == 4 )
  {
    v111 = v4 - 48;
    v235 = v111;
    v112 = *(_QWORD *)(v111 + 32);
    v236 = v112;
    v247 = v111 & 0xFFFFFFFFFFFF0000uLL;
    v188 = v111 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 592) -= v112;
    v113 = *(_QWORD *)v111;
    v114 = *(__int64 **)(v111 + 8);
    v115 = *(_QWORD *)(*(_QWORD *)v111 + 8LL);
    v116 = *v114;
    if ( *v114 == v115 && v116 == v111 )
    {
      *v114 = v113;
      *(_QWORD *)(v113 + 8) = v114;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v111, v115, v116, 0LL);
    }
    if ( !v6 )
    {
      LODWORD(v174) = NtCurrentPeb()->NtGlobalFlag;
      if ( ((unsigned __int16)v174 & 0x800) != 0 )
        RtlpUpdateTagEntry(a1, *(_WORD *)(v111 + 18), *(_QWORD *)(v111 + 32) >> 4, 0LL, 3);
    }
    v48 = v145;
    if ( v145 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v48 = 0;
    }
    v117 = *(_QWORD *)(v111 + 40);
    v237 = v117;
    if ( RtlGetCurrentServiceSessionId() )
      v118 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v118 = 2147353480LL;
    if ( *(_BYTE *)v118 )
      RtlpHeapLogRangeRelease(a1, v188, v117);
    v148 = 0LL;
    v191 = RtlpSecMemFreeVirtualMemory(v118, &v188, &v148, 0x8000LL);
    if ( RtlGetCurrentServiceSessionId() )
      v119 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v119 = 2147353472LL;
    if ( *(_BYTE *)v119 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent(a1, v111, v112, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v11);
    }
    v120 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v121 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v121 = 2147353482LL;
    if ( *(_BYTE *)v121 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v120 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapContractEvent(a1, v111, v112, 16 * *(_DWORD *)(a1 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v120);
    }
    v238 = v148 >> 4;
    goto LABEL_301;
  }
  v29 = *(unsigned __int16 *)(v4 + 8);
  if ( (unsigned __int16)v29 < *(_WORD *)(a1 + 432) )
  {
    v30 = *(unsigned __int8 *)((v29 >> 3) + a1 + 434);
    v155 = v30;
    v156 = v30;
    v31 = 1 << (v29 & 7);
    v157 = (v31 & v30) != 0;
    if ( (v31 & v30) == 0 )
    {
      v32 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2LL * *(unsigned __int16 *)(v4 + 8));
      if ( *v32 > 1u )
        --*v32;
    }
  }
  if ( !v6 )
  {
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x800) != 0 )
    {
      v124 = *(unsigned __int16 *)(v4 + 8);
      if ( (*(_BYTE *)(v4 + 10) & 2) != 0 )
      {
        v226 = v4 + 16 * v124 - 16;
        updated = RtlpUpdateTagEntry(a1, *(_WORD *)(v226 + 2), v124, 0LL, 2);
      }
      else
      {
        updated = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(v4 + 11), v124, 0LL, 2);
      }
    }
  }
  v33 = *(unsigned __int16 *)(v4 + 8);
  v148 = v33;
  v238 = v33;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v151 = 0;
    v228 = v4;
    v182 = *(_WORD *)(v4 + 12) ^ *(_WORD *)(a1 + 140);
    v34 = 16LL * v182;
    v35 = v4 - v34;
    if ( v4 - v34 != v4 )
    {
      v36 = *(_DWORD *)(a1 + 124);
      if ( !((*(_BYTE *)(v35 + 10) ^ *(_BYTE *)(a1 + 138) & (v36 >> 20)) & 1) )
      {
        if ( v36 )
        {
          *(_DWORD *)(v35 + 8) ^= *(_DWORD *)(a1 + 136);
          v94 = HIBYTE(*(_DWORD *)(v35 + 8));
          v159 = *(_DWORD *)(v35 + 8) ^ BYTE1(*(_DWORD *)(v35 + 8)) ^ HIWORD(*(_DWORD *)(v35 + 8));
          if ( (_BYTE)v94 != v159 )
            RtlpAnalyzeHeapFailure(a1, v35);
        }
        v95 = v35 + 16;
        v96 = *(_QWORD *)(v35 + 16);
        v97 = *(__int64 **)(v35 + 24);
        v98 = *(_QWORD *)(v96 + 8);
        v99 = *v97;
        if ( *v97 == v35 + 16 && v99 == v98 )
        {
          *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v35 + 8);
          v100 = *(__int64 **)(a1 + 312);
          if ( v100 )
          {
            v198 = 0LL;
            v101 = *(unsigned __int16 *)(v35 + 8);
            while ( 1 )
            {
              v102 = *((unsigned int *)v100 + 2);
              if ( v101 < v102 )
                break;
              if ( !*v100 )
              {
                v101 = (unsigned int)(v102 - 1);
                break;
              }
              v100 = (__int64 *)*v100;
            }
            v227 = v100;
            v198 = v101;
            LOBYTE(v95) = 1;
            RtlpHeapRemoveListEntry(a1, (_DWORD)v100, v95, v35 + 16, v101, *(unsigned __int16 *)(v35 + 8));
          }
          *v97 = v96;
          *(_QWORD *)(v96 + 8) = v97;
          if ( (*(_BYTE *)(v35 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
          {
            v106 = 1;
            v107 = *(_BYTE *)(v35 + 10);
            if ( (v107 & 4) != 0 )
            {
              v200 = 0LL;
              v108 = 16LL * *(unsigned __int16 *)(v35 + 8) - 32;
              v200 = v108;
              if ( (v107 & 2) != 0 && v108 > 4 )
              {
                v108 -= 4LL;
                v200 = v108;
              }
              v109 = RtlCompareMemoryUlong((PVOID)(v35 + 32), v108, 0xFEEEFEEE);
              if ( v109 != v108 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint(
                  "HEAP: Free Heap block %p modified at %p after it was freed\n",
                  (const void *)v35,
                  (const void *)(v109 + v35 + 32));
                RtlpBreakPointHeap();
              }
            }
          }
          else
          {
            LOBYTE(v135) = 1;
            RtlpDeCommitFreeBlock(a1, v35, *(unsigned __int16 *)(v35 + 8), v135);
            v106 = 0;
          }
        }
        else
        {
          RtlpLogHeapFailure(13, a1, v95, v98, v99, 0LL);
          v106 = 0;
        }
        v160 = v106;
        if ( v106 )
        {
          *(_BYTE *)(v35 + 10) = 0;
          *(_BYTE *)(v35 + 15) = 0;
          v4 = v35;
          v228 = v35;
          v148 += *(unsigned __int16 *)(v35 + 8);
          *(_WORD *)(v35 + 8) = v148;
          *(_WORD *)(v35 + 16 * v148 + 12) = *(_WORD *)(a1 + 140) ^ v148;
        }
        v33 = v148;
      }
    }
    v37 = v4 + 16 * v33;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v240 = 0LL;
      v202 = *(_DWORD *)(v37 + 8);
      v203 = v202;
      DWORD2(v240) = v202;
      DWORD2(v240) = *(_DWORD *)(a1 + 136) ^ v202;
      v161 = BYTE8(v240) ^ BYTE9(v240) ^ BYTE10(v240);
      if ( BYTE11(v240) != v161 )
      {
        v150 = 0;
        RtlpLogHeapFailure(3, a1, v4 + 16 * v33, 0, 0LL, 0LL);
        v33 = v148;
        goto LABEL_52;
      }
      v33 = v148;
    }
    v150 = 1;
LABEL_52:
    while ( 1 )
    {
      v38 = *(_DWORD *)(a1 + 124);
      if ( (*(_BYTE *)(v37 + 10) ^ *(_BYTE *)(a1 + 138) & (v38 >> 20)) & 1 )
        break;
      if ( v38 )
      {
        *(_DWORD *)(v37 + 8) ^= *(_DWORD *)(a1 + 136);
        v39 = HIBYTE(*(_DWORD *)(v37 + 8));
        v162 = *(_DWORD *)(v37 + 8) ^ BYTE1(*(_DWORD *)(v37 + 8)) ^ HIWORD(*(_DWORD *)(v37 + 8));
        if ( (_BYTE)v39 != v162 )
          RtlpAnalyzeHeapFailure(a1, v37);
      }
      v40 = v37 + 16;
      v41 = *(_QWORD *)(v37 + 16);
      v42 = *(__int64 **)(v37 + 24);
      v43 = *(_QWORD *)(v41 + 8);
      v44 = *v42;
      if ( *v42 == v37 + 16 && v44 == v43 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v37 + 8);
        v45 = *(__int64 **)(a1 + 312);
        if ( v45 )
        {
          v192 = 0LL;
          v46 = *(unsigned __int16 *)(v37 + 8);
          while ( 1 )
          {
            v47 = *((unsigned int *)v45 + 2);
            if ( v46 < v47 )
              break;
            if ( !*v45 )
            {
              v46 = (unsigned int)(v47 - 1);
              break;
            }
            v45 = (__int64 *)*v45;
          }
          v229 = v45;
          v192 = v46;
          LOBYTE(v40) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v45, v40, v37 + 16, v46, *(unsigned __int16 *)(v37 + 8));
        }
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        if ( (*(_BYTE *)(v37 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v49 = 1;
          v50 = *(_BYTE *)(v37 + 10);
          if ( (v50 & 4) != 0 )
          {
            v193 = 0LL;
            v51 = 16LL * *(unsigned __int16 *)(v37 + 8) - 32;
            v193 = v51;
            if ( (v50 & 2) != 0 && v51 > 4 )
            {
              v51 -= 4LL;
              v193 = v51;
            }
            v52 = RtlCompareMemoryUlong((PVOID)(v37 + 32), v51, 0xFEEEFEEE);
            if ( v52 != v51 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v37,
                (const void *)(v52 + v37 + 32));
              if ( NtCurrentPeb()->BeingDebugged )
              {
                RtlpHeapInvalidBadAddress = v37;
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
        }
        else
        {
          LOBYTE(v110) = 1;
          RtlpDeCommitFreeBlock(a1, v37, *(unsigned __int16 *)(v37 + 8), v110);
          v49 = 0;
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v40, v43, v44, 0LL);
        v49 = 0;
      }
      v163 = v49;
      if ( v49 )
      {
        *(_BYTE *)(v4 + 10) = 0;
        *(_BYTE *)(v4 + 15) = 0;
        v148 += *(unsigned __int16 *)(v37 + 8);
        *(_WORD *)(v4 + 8) = v148;
        *(_WORD *)(v4 + 16 * v148 + 12) = *(_WORD *)(a1 + 140) ^ v148;
        v33 = v148;
        break;
      }
      v33 = v148;
    }
    v244 = v4;
    v6 = v146;
    v7 = 1;
  }
  if ( v33 < *(_QWORD *)(a1 + 176) || v33 + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( v33 + *(_QWORD *)(a1 + 192) > *(_QWORD *)(a1 + 184)
      && v33 >= 0x100
      && *(_WORD *)(v4 + 12) == *(_WORD *)(a1 + 140) )
    {
      RtlpDeCommitFreeBlock(a1, v4, v33, 0LL);
      v48 = v145;
      goto LABEL_301;
    }
    if ( v33 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v4);
      v88 = (_DWORD *)(a1 + 124);
      goto LABEL_143;
    }
    if ( v6 )
    {
      v53 = (unsigned __int16)v33;
      v194 = (unsigned __int16)v33;
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      v54 = (_QWORD *)(a1 + 336);
      v55 = *(__int64 **)(a1 + 312);
      if ( v55 )
      {
        v189 = 0LL;
        while ( 1 )
        {
          v56 = *((unsigned int *)v55 + 2);
          if ( (unsigned __int16)v33 < v56 )
          {
            v189 = (unsigned __int16)v33;
            v57 = (unsigned __int16)v33;
            goto LABEL_94;
          }
          if ( !*v55 )
            break;
          v55 = (__int64 *)*v55;
        }
        v57 = (unsigned int)(v56 - 1);
        v189 = (unsigned int)v57;
LABEL_94:
        v230 = v55;
        v179 = v57;
        while ( 1 )
        {
          v58 = (unsigned int)(v57 - *((_DWORD *)v55 + 6));
          v59 = 0LL;
          v60 = (_QWORD *)v55[4];
          v174 = v60;
          v61 = (_QWORD *)v60[1];
          if ( v60 == v61 )
          {
            v59 = v60;
          }
          else
          {
            v62 = *((_DWORD *)v61 - 2);
            v204 = v62;
            v205 = v62;
            v249 = v62;
            v63 = v62;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v62 ^= *(_DWORD *)(a1 + 136);
              v249 = v62;
              v63 = v62;
              if ( HIBYTE(v62) != ((unsigned __int8)v62 ^ (unsigned __int8)(BYTE1(v62) ^ BYTE2(v62))) )
                RtlpLogHeapFailure(3, a1, (_DWORD)v61 - 16, 0, 0LL, 0LL);
              v60 = v174;
            }
            v190 = v62;
            v64 = v63;
            v53 = v194;
            v206 = v194 - v64;
            if ( (int)v194 - v64 > 0 )
            {
              v59 = v60;
            }
            else
            {
              v65 = *v60 - 16LL;
              v66 = *(_DWORD *)(v65 + 8);
              v207 = v66;
              v219 = v66;
              v250 = v66;
              v67 = v66;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v66 ^= *(_DWORD *)(a1 + 136);
                v250 = v66;
                v67 = v66;
                v164 = v66 ^ BYTE1(v66) ^ BYTE2(v66);
                if ( HIBYTE(v66) != v164 )
                  RtlpLogHeapFailure(3, a1, v65, 0, 0LL, 0LL);
                v60 = v174;
              }
              v180 = v66;
              v68 = v67;
              v53 = v194;
              v209 = v194 - v68;
              if ( (int)v194 - v68 <= 0 )
              {
                v59 = (_QWORD *)*v60;
              }
              else if ( !*v55 && (_DWORD)v179 == *((_DWORD *)v55 + 2) - 1 )
              {
                if ( *((_DWORD *)v55 + 3) )
                  v58 = (unsigned int)(2 * v58);
                v208 = v58;
                for ( k = *(_QWORD **)(v55[6] + 8 * v58); v60 != k; k = (_QWORD *)*k )
                {
                  v104 = *((_DWORD *)k - 2);
                  v221 = v104;
                  v220 = v104;
                  v251 = v104;
                  v105 = v104;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v104 ^= *(_DWORD *)(a1 + 136);
                    v251 = v104;
                    v105 = v104;
                    v165 = v104 ^ BYTE1(v104) ^ BYTE2(v104);
                    if ( HIBYTE(v104) != v165 )
                    {
                      RtlpLogHeapFailure(3, a1, (_DWORD)k - 16, 0, 0LL, 0LL);
                      v105 = v104;
                    }
                    v60 = v174;
                  }
                  v181 = v104;
                  v218 = v194 - v105;
                  if ( v218 <= 0 )
                  {
                    v59 = k;
                    break;
                  }
                }
              }
              else
              {
                v195 = 0LL;
                v69 = (unsigned int)v58 >> 5;
                v175 = (unsigned int)v58 >> 5;
                v70 = ((unsigned int)(*((_DWORD *)v55 + 2) - *((_DWORD *)v55 + 6)) >> 5) - 1;
                v71 = (unsigned int *)(v55[5] + 4 * v69);
                v195 = v71;
                v72 = *v71 & (-1 << (v58 & 0x1F));
                while ( !v72 )
                {
                  if ( (unsigned int)v69 > v70 )
                  {
                    v59 = 0LL;
                    goto LABEL_116;
                  }
                  v195 = ++v71;
                  v72 = *v71;
                  LODWORD(v69) = v69 + 1;
                  v175 = v69;
                }
                if ( (_WORD)v72 )
                {
                  if ( (_BYTE)v72 )
                    v73 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v72];
                  else
                    v73 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v72)] + 8;
                }
                else if ( (v72 & 0xFF0000) != 0 )
                {
                  v73 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v72)] + 16;
                }
                else
                {
                  v73 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v72 >> 24] + 24;
                }
                v74 = (unsigned int)(v73 + 32 * v69);
                v175 = v74;
                if ( *((_DWORD *)v55 + 3) )
                  v74 = (unsigned int)(2 * v74);
                v211 = v74;
                v59 = *(_QWORD **)(v55[6] + 8 * v74);
              }
            }
          }
LABEL_116:
          v245 = v59;
          if ( v59 )
            break;
          v55 = (__int64 *)*v55;
          v57 = *((unsigned int *)v55 + 6);
          v179 = v57;
          v189 = v57;
        }
        v239 = v59;
        v54 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v59 = (_QWORD *)*v54;
      }
      while ( v54 != v59 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v75 = *((_DWORD *)v59 - 2);
          v210 = v75;
          v212 = v75;
          v252 = v75;
          if ( (v75 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v75 ^= *(_DWORD *)(a1 + 136);
            v252 = v75;
          }
          v76 = v75;
        }
        else
        {
          LOWORD(v75) = *((_WORD *)v59 - 4);
          v76 = v75;
        }
        v152 = v75;
        if ( v53 <= v76 )
          break;
        v59 = (_QWORD *)*v59;
        v54 = (_QWORD *)(a1 + 336);
      }
      v77 = (_QWORD *)(v4 + 16);
      v78 = (__int64 *)v59[1];
      if ( (_QWORD *)*v78 == v59 )
      {
        *v77 = v59;
        *(_QWORD *)(v4 + 24) = v78;
        *v78 = (__int64)v77;
        v59[1] = v77;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v59, 0, *v78, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
      v79 = *(__int64 **)(a1 + 312);
      if ( v79 )
      {
        v178 = 0LL;
        v80 = *(unsigned __int16 *)(v4 + 8);
        while ( 1 )
        {
          v81 = *((unsigned int *)v79 + 2);
          if ( v80 < v81 )
          {
            v178 = *(unsigned __int16 *)(v4 + 8);
            v82 = v81 - 1;
            goto LABEL_133;
          }
          if ( !*v79 )
            break;
          v79 = (__int64 *)*v79;
        }
        v82 = v81 - 1;
        v178 = (unsigned int)(v81 - 1);
        LODWORD(v80) = v81 - 1;
LABEL_133:
        v231 = v79;
        v83 = *(unsigned __int16 *)(v4 + 8);
        v232 = *(unsigned __int16 *)(v4 + 8);
        v84 = v80 - *((_DWORD *)v79 + 6);
        v85 = 2 * v84;
        if ( !*((_DWORD *)v79 + 3) )
          v85 = v84;
        v178 = v85;
        v213 = v85;
        ++*((_DWORD *)v79 + 4);
        v86 = *(_QWORD *)(v79[6] + 8 * v85);
        if ( (_DWORD)v80 == v82 )
          ++*((_DWORD *)v79 + 5);
        if ( !v86 )
          goto LABEL_138;
        v92 = *(_DWORD *)(v86 - 8);
        v214 = v92;
        v215 = v92;
        v253 = v92;
        v93 = v92;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v92 ^= *(_DWORD *)(a1 + 136);
          v253 = v92;
          v93 = v92;
          v172 = v92 ^ BYTE1(v92) ^ BYTE2(v92);
          if ( HIBYTE(v92) != v172 )
          {
            RtlpLogHeapFailure(3, a1, v86 - 16, 0, 0LL, 0LL);
            v93 = v92;
            v83 = v232;
          }
          LODWORD(v85) = v178;
        }
        v187 = v92;
        v216 = v83 - v93;
        if ( v216 <= 0 )
LABEL_138:
          *(_QWORD *)(v79[6] + 8LL * (unsigned int)v85) = v4 + 16;
        if ( !v86 )
        {
          v87 = (_DWORD *)(v79[5] + 4 * ((unsigned __int64)v84 >> 5));
          *v87 |= 1 << (v84 & 0x1F);
        }
      }
      v88 = (_DWORD *)(a1 + 124);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v167 = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_BYTE *)(v4 + 11) = v167;
        *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_143;
    }
    v125 = (unsigned __int16)v33;
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_263:
      v128 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v125);
      else
        Entry = (_QWORD *)*v128;
      while ( v128 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v136 = *((_DWORD *)Entry - 2);
          v217 = v136;
          LODWORD(v179) = v136;
          v254 = v136;
          if ( (v136 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v136 ^= *(_DWORD *)(a1 + 136);
            v254 = v136;
          }
          v137 = v136;
        }
        else
        {
          LOWORD(v136) = *((_WORD *)Entry - 4);
          v137 = v136;
        }
        v173 = v136;
        if ( v125 <= v137 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v130 = (_QWORD *)(v4 + 16);
      v131 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v131 == Entry )
      {
        *v130 = Entry;
        *(_QWORD *)(v4 + 24) = v131;
        *v131 = (__int64)v130;
        Entry[1] = v130;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v131, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
      v132 = *(__int64 **)(a1 + 312);
      if ( v132 )
      {
        v197 = 0LL;
        v133 = *(unsigned __int16 *)(v4 + 8);
        while ( 1 )
        {
          v134 = *((unsigned int *)v132 + 2);
          if ( v133 < v134 )
            break;
          if ( !*v132 )
          {
            v133 = (unsigned int)(v134 - 1);
            break;
          }
          v132 = (__int64 *)*v132;
        }
        v234 = v132;
        v197 = v133;
        LOBYTE(v134) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v132, v134, v4 + 16, v133, *(unsigned __int16 *)(v4 + 8));
      }
      v88 = (_DWORD *)(a1 + 124);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v168 = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_BYTE *)(v4 + 11) = v168;
        *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      }
LABEL_143:
      v89 = updated;
      if ( updated )
      {
        if ( *v88 )
        {
          *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
          v169 = *(_DWORD *)(v4 + 8) ^ BYTE1(*(_DWORD *)(v4 + 8)) ^ HIWORD(*(_DWORD *)(v4 + 8));
          if ( *(_BYTE *)(v4 + 11) != v169 )
          {
            RtlpAnalyzeHeapFailure(a1, v4);
            v89 = updated;
          }
        }
        *(_BYTE *)(v4 + 10) |= 2u;
        v122 = *(_WORD *)(v4 + 8);
        v123 = 16LL * v122 + v4;
        if ( *v88 )
        {
          v153 = HIBYTE(v122) ^ *(_BYTE *)(v4 + 10) ^ v122;
          *(_BYTE *)(v4 + 11) = v153;
          *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        *(_WORD *)(v123 - 4) = v89;
        *(_WORD *)(v123 - 2) = 0;
        v7 = 1;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
        {
          v183 = RtlLogStackBackTraceEx(1LL);
          *(_WORD *)(v123 - 2) = v183;
          v48 = v145;
          goto LABEL_301;
        }
      }
      else
      {
        v7 = 1;
      }
      goto LABEL_68;
    }
    v126 = (_DWORD *)(v4 + 32);
    v233 = v4 + 32;
    v127 = (16 * (unsigned __int64)(unsigned int)v125 - 32) >> 2;
    v196 = v127;
    if ( v127 )
    {
      if ( ((unsigned __int8)v126 & 4) == 0 )
        goto LABEL_260;
      *v126 = -17891602;
      v196 = --v127;
      if ( v127 )
      {
        v126 = (_DWORD *)(v4 + 36);
        v233 = v4 + 36;
LABEL_260:
        memset64(v126, 0xFEEEFEEEFEEEFEEEuLL, v127 >> 1);
        if ( (v127 & 1) != 0 )
          v126[v127 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v4 + 10) |= 4u;
    goto LABEL_263;
  }
  RtlpDeCommitFreeBlock(a1, v4, v33, 0LL);
LABEL_68:
  v48 = v145;
LABEL_301:
  v139 = 256;
  if ( v48 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 640);
      v140 = *(_DWORD *)(a1 + 648);
      if ( *(_DWORD *)(a1 + 640) > v140 )
      {
        *(_DWORD *)(a1 + 640) = 0;
        v143 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v143 > *(_QWORD *)(a1 + 672) )
          *(_QWORD *)(a1 + 672) = v143;
        *(_QWORD *)(a1 + 680) = v143;
      }
      v141 = (_DWORD *)(a1 + 652);
      if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
      {
        v144 = (_DWORD *)(a1 + 652);
        if ( *(_BYTE *)(a1 + 418) != 2 || (v144 = (_DWORD *)(a1 + 652), *(_DWORD *)(a1 + 656) <= 0x10u) )
          v139 = 16;
        if ( *(_DWORD *)(a1 + 644) > v139 && v140 < 0x10000 )
        {
          *(_DWORD *)(a1 + 648) = 2 * v140;
          v141 = v144;
        }
        *(_DWORD *)(a1 + 644) = 0;
        *v141 = 0;
      }
    }
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return v7;
}
