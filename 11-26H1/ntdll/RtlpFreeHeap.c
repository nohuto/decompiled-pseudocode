/*
 * XREFs of RtlpFreeHeap @ 0x1800233D0
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180017DFC (RtlpLogHeapFreeEvent.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800214E0 (RtlpUpdateHeapWatermarks.c)
 *     RtlpUpdateTagEntry @ 0x180022CF8 (RtlpUpdateTagEntry.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180025AF0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindEntry @ 0x180029F40 (RtlpFindEntry.c)
 *     RtlpAbFreeKernelEntry @ 0x18002A590 (RtlpAbFreeKernelEntry.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapContractEvent @ 0x180072390 (RtlpLogHeapContractEvent.c)
 *     RtlLogStackBackTraceEx @ 0x18007C250 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x18007E3B0 (RtlpHeapAddListEntry.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x18008A90C (RtlpHeapLogRangeRelease.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163260 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int16 *Src, int a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned __int16 *v4; // rsi
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
  unsigned __int16 *v35; // r14
  unsigned int v36; // ecx
  __int64 v37; // r14
  unsigned int v38; // ecx
  int v39; // edi
  __int64 v40; // r8
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
  unsigned __int64 v51; // rdi
  __int64 v52; // r12
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
  unsigned __int16 v89; // r8
  unsigned int v90; // ecx
  unsigned int v91; // eax
  int v92; // r12d
  unsigned __int16 v93; // cx
  int v94; // edi
  char *v95; // r8
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
  unsigned __int64 v108; // rdi
  __int64 v109; // r12
  __int64 v110; // r9
  unsigned __int16 *v111; // rsi
  __int64 v112; // r14
  __int64 v113; // rax
  __int64 *v114; // rcx
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rdi
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdi
  __int64 v131; // rcx
  unsigned __int16 v132; // cx
  unsigned __int16 *v133; // r14
  __int64 v134; // r8
  unsigned __int64 v135; // r14
  _DWORD *v136; // r8
  unsigned __int64 v137; // rdx
  _QWORD *v138; // rdi
  _QWORD *Entry; // r8
  _QWORD *v140; // rdi
  __int64 *v141; // rax
  __int64 *v142; // rdx
  unsigned __int64 v143; // rcx
  unsigned __int64 v144; // r8
  __int64 v145; // r9
  int v146; // eax
  unsigned __int16 v147; // cx
  struct _TEB *v148; // rdi
  unsigned int v149; // r8d
  unsigned int v150; // edx
  _DWORD *v151; // rax
  unsigned __int64 v153; // rcx
  char *v154; // rdi
  char v155; // [rsp+40h] [rbp-2C8h]
  char v156; // [rsp+41h] [rbp-2C7h]
  unsigned __int16 updated; // [rsp+48h] [rbp-2C0h]
  unsigned __int64 v158; // [rsp+50h] [rbp-2B8h] BYREF
  char v159; // [rsp+58h] [rbp-2B0h]
  char v160; // [rsp+59h] [rbp-2AFh]
  char v161; // [rsp+60h] [rbp-2A8h]
  __int16 v162; // [rsp+68h] [rbp-2A0h]
  char v163; // [rsp+6Ah] [rbp-29Eh]
  char v165; // [rsp+6Dh] [rbp-29Bh]
  char v166; // [rsp+6Eh] [rbp-29Ah]
  bool v167; // [rsp+6Fh] [rbp-299h]
  char v169; // [rsp+71h] [rbp-297h]
  char v170; // [rsp+72h] [rbp-296h]
  char v171; // [rsp+73h] [rbp-295h]
  char v172; // [rsp+74h] [rbp-294h]
  char v173; // [rsp+76h] [rbp-292h]
  char v174; // [rsp+77h] [rbp-291h]
  char v175; // [rsp+78h] [rbp-290h]
  char v177; // [rsp+7Ah] [rbp-28Eh]
  char v178; // [rsp+7Bh] [rbp-28Dh]
  char v179; // [rsp+7Ch] [rbp-28Ch]
  bool v180; // [rsp+7Dh] [rbp-28Bh]
  char v181; // [rsp+7Eh] [rbp-28Ah]
  char v182; // [rsp+7Fh] [rbp-289h]
  __int16 v183; // [rsp+80h] [rbp-288h]
  _QWORD *v184; // [rsp+88h] [rbp-280h]
  unsigned int v185; // [rsp+90h] [rbp-278h]
  char v186; // [rsp+94h] [rbp-274h]
  unsigned int v187; // [rsp+98h] [rbp-270h]
  __int64 v188; // [rsp+A0h] [rbp-268h]
  __int64 v189; // [rsp+A8h] [rbp-260h]
  __int16 v190; // [rsp+B0h] [rbp-258h]
  __int16 v191; // [rsp+B2h] [rbp-256h]
  unsigned __int16 v192; // [rsp+B4h] [rbp-254h]
  unsigned __int16 v193; // [rsp+B6h] [rbp-252h]
  int v195; // [rsp+BCh] [rbp-24Ch]
  int v196; // [rsp+C0h] [rbp-248h]
  __int16 v197; // [rsp+C4h] [rbp-244h]
  unsigned __int64 v198; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v199; // [rsp+D0h] [rbp-238h]
  __int16 v200; // [rsp+D8h] [rbp-230h]
  int v201; // [rsp+DCh] [rbp-22Ch]
  unsigned __int64 v202; // [rsp+E8h] [rbp-220h]
  unsigned __int64 v203; // [rsp+F0h] [rbp-218h]
  unsigned __int64 v204; // [rsp+F8h] [rbp-210h]
  unsigned int *v205; // [rsp+100h] [rbp-208h]
  unsigned __int64 v206; // [rsp+108h] [rbp-200h]
  unsigned __int64 v207; // [rsp+110h] [rbp-1F8h]
  unsigned __int64 v208; // [rsp+118h] [rbp-1F0h]
  char *v209; // [rsp+120h] [rbp-1E8h]
  unsigned __int64 v210; // [rsp+128h] [rbp-1E0h]
  unsigned int NtGlobalFlag; // [rsp+138h] [rbp-1D0h]
  int v212; // [rsp+13Ch] [rbp-1CCh]
  int v213; // [rsp+140h] [rbp-1C8h]
  int v214; // [rsp+144h] [rbp-1C4h]
  int v215; // [rsp+148h] [rbp-1C0h]
  int v216; // [rsp+14Ch] [rbp-1BCh]
  int v217; // [rsp+150h] [rbp-1B8h]
  int v218; // [rsp+154h] [rbp-1B4h]
  int v219; // [rsp+158h] [rbp-1B0h]
  int v220; // [rsp+15Ch] [rbp-1ACh]
  int v221; // [rsp+160h] [rbp-1A8h]
  int v222; // [rsp+164h] [rbp-1A4h]
  int v223; // [rsp+168h] [rbp-1A0h]
  int v224; // [rsp+16Ch] [rbp-19Ch]
  int v225; // [rsp+170h] [rbp-198h]
  int v226; // [rsp+174h] [rbp-194h]
  int v227; // [rsp+178h] [rbp-190h]
  int v228; // [rsp+17Ch] [rbp-18Ch]
  int v229; // [rsp+180h] [rbp-188h]
  int v230; // [rsp+184h] [rbp-184h]
  int v231; // [rsp+188h] [rbp-180h]
  char *v232; // [rsp+190h] [rbp-178h]
  __int64 *v233; // [rsp+198h] [rbp-170h]
  __int64 v234; // [rsp+1A0h] [rbp-168h]
  __int64 v235; // [rsp+1A8h] [rbp-160h]
  unsigned __int16 *v236; // [rsp+1B0h] [rbp-158h]
  __int64 *v237; // [rsp+1B8h] [rbp-150h]
  unsigned __int16 *v238; // [rsp+1C0h] [rbp-148h]
  __int64 *v239; // [rsp+1D0h] [rbp-138h]
  __int64 *v240; // [rsp+1D8h] [rbp-130h]
  __int64 *v241; // [rsp+1E0h] [rbp-128h]
  __int64 v242; // [rsp+1E8h] [rbp-120h]
  char *v243; // [rsp+1F0h] [rbp-118h]
  __int64 *v244; // [rsp+1F8h] [rbp-110h]
  unsigned __int16 *v245; // [rsp+200h] [rbp-108h]
  __int64 v246; // [rsp+208h] [rbp-100h]
  __int64 v247; // [rsp+210h] [rbp-F8h]
  unsigned __int64 v248; // [rsp+218h] [rbp-F0h]
  _QWORD *v249; // [rsp+220h] [rbp-E8h]
  __int128 v250; // [rsp+228h] [rbp-E0h]
  struct _TEB *v251; // [rsp+238h] [rbp-D0h]
  char *v252; // [rsp+240h] [rbp-C8h]
  struct _TEB *v253; // [rsp+248h] [rbp-C0h]
  unsigned __int16 *v254; // [rsp+250h] [rbp-B8h]
  _QWORD *v255; // [rsp+258h] [rbp-B0h]
  struct _TEB *v256; // [rsp+260h] [rbp-A8h]
  unsigned __int64 v257; // [rsp+268h] [rbp-A0h]
  char *v258; // [rsp+270h] [rbp-98h]
  int v259; // [rsp+280h] [rbp-88h]
  int v260; // [rsp+290h] [rbp-78h]
  int v261; // [rsp+2A0h] [rbp-68h]
  int v262; // [rsp+2B0h] [rbp-58h]
  int v263; // [rsp+2C0h] [rbp-48h]
  int v264; // [rsp+2D0h] [rbp-38h]

  v4 = a3;
  v6 = 1;
  v156 = 1;
  v158 = 0LL;
  v155 = 0;
  v235 = 0LL;
  v7 = 1;
  v196 = 1;
  v245 = 0LL;
  v246 = 0LL;
  v198 = 0LL;
  v201 = 0;
  v247 = 0LL;
  updated = 0;
  v236 = 0LL;
  if ( Src == a3 )
  {
    RtlpLogHeapFailure(9, (_DWORD)Src, (_DWORD)a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *((_DWORD *)Src + 29) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v156 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(Src);
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
    && ((*((_BYTE *)v4 + 10) ^ (unsigned __int8)(Src[69] & (*((_DWORD *)Src + 31) >> 17))) & 8) == 0 )
  {
    RtlpLogHeapFreeEvent((__int64)Src, a4, v9, a4);
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      *((_DWORD *)v4 + 2) ^= *((_DWORD *)Src + 34);
      v186 = *((_DWORD *)v4 + 2) ^ BYTE1(*((_DWORD *)v4 + 2)) ^ HIWORD(*((_DWORD *)v4 + 2));
      if ( *((_BYTE *)v4 + 11) != v186 )
        RtlpAnalyzeHeapFailure(Src, v4);
    }
    goto LABEL_33;
  }
  v13 = *((_QWORD *)Src + 44);
  v14 = 0;
  v15 = NtCurrentTeb();
  v256 = v15;
  v232 = 0LL;
  v187 = 0;
  v16 = 0LL;
  v209 = 0LL;
  v251 = v15;
  SchedulerSharedDataSlot = (char *)v15->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; ; ++i )
    {
      v187 = i;
      if ( i >= 8 )
        break;
      v9 = (__int64)&SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v9 )
      {
        v16 = &SchedulerSharedDataSlot[8 * i];
        v209 = v16;
        break;
      }
    }
  }
  v252 = v16;
  v232 = v16;
  if ( v16 )
    *(_QWORD *)v16 = v13;
  v258 = v16;
  v19 = _interlockedbittestandreset((volatile signed __int32 *)(v13 + 8), 0);
  UniqueThread = v15->ClientId.UniqueThread;
  if ( v19 )
  {
    *(_QWORD *)(v13 + 16) = UniqueThread;
    *(_DWORD *)(v13 + 12) = 1;
    v195 = 1;
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
    v195 = v14;
    if ( !v14 )
    {
      v180 = byte_1801CB8C8 != 0;
      if ( byte_1801CB8C8 )
      {
        v159 = 0;
        v148 = NtCurrentTeb();
        v253 = v148;
        v148->LastStatusValue = -1073741420;
        v148->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000194);
        v7 = 0;
        v196 = 0;
        v48 = 0;
        goto LABEL_301;
      }
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v90 = *((_DWORD *)Src + 154) + 1;
      *((_DWORD *)Src + 154) = v90;
      v91 = *((_DWORD *)Src + 155) + 1;
      *((_DWORD *)Src + 155) = v91;
      if ( *((_BYTE *)Src + 418) != 2 )
      {
        if ( v90 < v91 )
        {
          v91 = 0;
          *((_QWORD *)Src + 77) = 0LL;
          v90 = 0;
        }
        if ( v91 >= v90 >> 4 )
          *((_DWORD *)Src + 30) |= 0x20000000u;
      }
      goto LABEL_19;
    }
  }
  ++*((_DWORD *)Src + 154);
LABEL_19:
  v159 = 1;
  v155 = 1;
  if ( *((_DWORD *)Src + 31) )
  {
    *((_DWORD *)v4 + 2) ^= *((_DWORD *)Src + 34);
    v181 = *((_DWORD *)v4 + 2) ^ BYTE1(*((_DWORD *)v4 + 2)) ^ HIWORD(*((_DWORD *)v4 + 2));
    if ( *((_BYTE *)v4 + 11) != v181 )
      RtlpAnalyzeHeapFailure(Src, v4);
  }
  v21 = v4[4];
  for ( j = (__int64 *)*((_QWORD *)Src + 39); ; j = (__int64 *)*j )
  {
    v23 = *((unsigned int *)j + 2);
    if ( v21 < v23 )
    {
      v24 = v4[4];
      goto LABEL_27;
    }
    if ( !*j )
      break;
  }
  v24 = (unsigned int)(v23 - 1);
LABEL_27:
  v233 = j;
  if ( v24 < v23 && v21 == v24 )
  {
    v25 = v21 - *((unsigned int *)j + 6);
    v26 = 2 * v25;
    if ( !*((_DWORD *)j + 3) )
      v26 = v25;
    v27 = j[6] + 8 * v26;
    v234 = v27;
  }
  else
  {
    v27 = 0LL;
    v234 = 0LL;
  }
  v235 = v27;
LABEL_33:
  v28 = *((_BYTE *)v4 + 10);
  if ( (v28 & 8) != 0 )
    *((_BYTE *)v4 + 10) = v28 & 0xF7;
  if ( *((_BYTE *)v4 + 15) == 4 )
  {
    v111 = v4 - 24;
    v245 = v111;
    v112 = *((_QWORD *)v111 + 4);
    v246 = v112;
    v257 = (unsigned __int64)v111 & 0xFFFFFFFFFFFF0000uLL;
    v198 = (unsigned __int64)v111 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)Src + 74) -= v112;
    v113 = *(_QWORD *)v111;
    v114 = (__int64 *)*((_QWORD *)v111 + 1);
    v115 = *(_QWORD *)(*(_QWORD *)v111 + 8LL);
    v116 = *v114;
    if ( *v114 == v115 && (unsigned __int16 *)v116 == v111 )
    {
      *v114 = v113;
      *(_QWORD *)(v113 + 8) = v114;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v111, v115, v116, 0LL);
    }
    if ( !v6 )
    {
      LODWORD(v184) = NtCurrentPeb()->NtGlobalFlag;
      v114 = (__int64 *)(unsigned int)v184;
      if ( ((unsigned __int16)v184 & 0x800) != 0 )
        RtlpUpdateTagEntry((__int64)Src, v111[9], *((_QWORD *)v111 + 4) >> 4, 0LL, 3);
    }
    v48 = v155;
    if ( v155 )
    {
      RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      v48 = 0;
    }
    v117 = *((_QWORD *)v111 + 5);
    v247 = v117;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v114, v116, v9, v115) )
      v118 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v118 = 2147353480LL;
    if ( *(_BYTE *)v118 )
      RtlpHeapLogRangeRelease(Src, v198, v117);
    v158 = 0LL;
    v201 = RtlpSecMemFreeVirtualMemory(v118, &v198, &v158, 0x8000LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v120, v119, v121, v122) )
      v126 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v126 = 2147353472LL;
    if ( *(_BYTE *)v126 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v126, v123, v124, v125) )
        v11 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent(
        (_DWORD)Src,
        (_DWORD)v111,
        v112,
        16 * *((_QWORD *)Src + 24),
        0,
        0LL,
        *(unsigned __int8 *)v11);
    }
    v130 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v126, v123, v124, v125) )
      v131 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v131 = 2147353482LL;
    if ( *(_BYTE *)v131 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v131, v127, v128, v129) )
        v130 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapContractEvent(
        (_DWORD)Src,
        (_DWORD)v111,
        v112,
        16 * *((_DWORD *)Src + 48),
        0,
        0LL,
        *(unsigned __int8 *)v130);
    }
    v248 = v158 >> 4;
    goto LABEL_301;
  }
  v29 = v4[4];
  if ( (unsigned __int16)v29 < Src[216] )
  {
    v30 = *((unsigned __int8 *)Src + (v29 >> 3) + 434);
    v165 = v30;
    v166 = v30;
    v31 = 1 << (v29 & 7);
    v167 = (v31 & v30) != 0;
    if ( (v31 & v30) == 0 )
    {
      v32 = (_WORD *)(*((_QWORD *)Src + 53) + 2LL * v4[4]);
      if ( *v32 > 1u )
        --*v32;
    }
  }
  if ( !v6 )
  {
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x800) != 0 )
    {
      v134 = v4[4];
      if ( (v4[5] & 2) != 0 )
      {
        v236 = &v4[8 * v134 - 8];
        updated = RtlpUpdateTagEntry((__int64)Src, v236[1], v134, 0LL, 2);
      }
      else
      {
        updated = RtlpUpdateTagEntry((__int64)Src, *((unsigned __int8 *)v4 + 11), v134, 0LL, 2);
      }
    }
  }
  v33 = v4[4];
  v158 = v33;
  v248 = v33;
  if ( *((char *)Src + 112) >= 0 )
  {
    v161 = 0;
    v238 = v4;
    v192 = v4[6] ^ Src[70];
    v34 = 16LL * v192;
    v35 = &v4[v34 / 0xFFFFFFFFFFFFFFFEuLL];
    if ( &v4[v34 / 0xFFFFFFFFFFFFFFFEuLL] != v4 )
    {
      v36 = *((_DWORD *)Src + 31);
      if ( !((*((_BYTE *)v35 + 10) ^ (_BYTE)Src[69] & (v36 >> 20)) & 1) )
      {
        if ( v36 )
        {
          *((_DWORD *)v35 + 2) ^= *((_DWORD *)Src + 34);
          v94 = HIBYTE(*((_DWORD *)v35 + 2));
          v169 = *((_DWORD *)v35 + 2) ^ BYTE1(*((_DWORD *)v35 + 2)) ^ HIWORD(*((_DWORD *)v35 + 2));
          if ( (_BYTE)v94 != v169 )
            RtlpAnalyzeHeapFailure(Src, v35);
        }
        v95 = (char *)(v35 + 8);
        v96 = *((_QWORD *)v35 + 2);
        v97 = (__int64 *)*((_QWORD *)v35 + 3);
        v98 = *(_QWORD *)(v96 + 8);
        v99 = *v97;
        if ( (unsigned __int16 *)*v97 == v35 + 8 && v99 == v98 )
        {
          *((_QWORD *)Src + 24) -= v35[4];
          v100 = (__int64 *)*((_QWORD *)Src + 39);
          if ( v100 )
          {
            v208 = 0LL;
            v101 = v35[4];
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
            v237 = v100;
            v208 = v101;
            LOBYTE(v95) = 1;
            RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v100, (_DWORD)v95, (_DWORD)v35 + 16, v101, v35[4]);
          }
          *v97 = v96;
          *(_QWORD *)(v96 + 8) = v97;
          if ( (v35[5] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v35, v95) )
          {
            v106 = 1;
            v107 = *((_BYTE *)v35 + 10);
            if ( (v107 & 4) != 0 )
            {
              v210 = 0LL;
              v108 = 16LL * v35[4] - 32;
              v210 = v108;
              if ( (v107 & 2) != 0 && v108 > 4 )
              {
                v108 -= 4LL;
                v210 = v108;
              }
              v109 = RtlCompareMemoryUlong(v35 + 16, v108, 4277075694LL);
              if ( v109 != v108 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v35, (char *)v35 + v109 + 32);
                RtlpBreakPointHeap();
              }
            }
          }
          else
          {
            LOBYTE(v145) = 1;
            RtlpDeCommitFreeBlock(Src, v35, v35[4], v145);
            v106 = 0;
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (_DWORD)Src, (_DWORD)v95, v98, v99, 0LL);
          v106 = 0;
        }
        v170 = v106;
        if ( v106 )
        {
          *((_BYTE *)v35 + 10) = 0;
          *((_BYTE *)v35 + 15) = 0;
          v4 = v35;
          v238 = v35;
          v158 += v35[4];
          v35[4] = v158;
          v35[8 * v158 + 6] = Src[70] ^ v158;
        }
        v33 = v158;
      }
    }
    v37 = (__int64)&v4[8 * v33];
    if ( *((_DWORD *)Src + 31) )
    {
      v250 = 0LL;
      v212 = *(_DWORD *)(v37 + 8);
      v213 = v212;
      DWORD2(v250) = v212;
      DWORD2(v250) = *((_DWORD *)Src + 34) ^ v212;
      v171 = BYTE8(v250) ^ BYTE9(v250) ^ BYTE10(v250);
      if ( BYTE11(v250) != v171 )
      {
        v160 = 0;
        RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v4 + 16 * v33, 0, 0LL, 0LL);
        v33 = v158;
        goto LABEL_52;
      }
      v33 = v158;
    }
    v160 = 1;
LABEL_52:
    while ( 1 )
    {
      v38 = *((_DWORD *)Src + 31);
      if ( (*(_BYTE *)(v37 + 10) ^ (_BYTE)Src[69] & (v38 >> 20)) & 1 )
        break;
      if ( v38 )
      {
        *(_DWORD *)(v37 + 8) ^= *((_DWORD *)Src + 34);
        v39 = HIBYTE(*(_DWORD *)(v37 + 8));
        v172 = *(_DWORD *)(v37 + 8) ^ BYTE1(*(_DWORD *)(v37 + 8)) ^ HIWORD(*(_DWORD *)(v37 + 8));
        if ( (_BYTE)v39 != v172 )
          RtlpAnalyzeHeapFailure(Src, v37);
      }
      v40 = v37 + 16;
      v41 = *(_QWORD *)(v37 + 16);
      v42 = *(__int64 **)(v37 + 24);
      v43 = *(_QWORD *)(v41 + 8);
      v44 = *v42;
      if ( *v42 == v37 + 16 && v44 == v43 )
      {
        *((_QWORD *)Src + 24) -= *(unsigned __int16 *)(v37 + 8);
        v45 = (__int64 *)*((_QWORD *)Src + 39);
        if ( v45 )
        {
          v202 = 0LL;
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
          v239 = v45;
          v202 = v46;
          LOBYTE(v40) = 1;
          RtlpHeapRemoveListEntry((_DWORD)Src, (_DWORD)v45, v40, v37 + 16, v46, *(unsigned __int16 *)(v37 + 8));
        }
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        if ( (*(_BYTE *)(v37 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(Src, v37, v40) )
        {
          v49 = 1;
          v50 = *(_BYTE *)(v37 + 10);
          if ( (v50 & 4) != 0 )
          {
            v203 = 0LL;
            v51 = 16LL * *(unsigned __int16 *)(v37 + 8) - 32;
            v203 = v51;
            if ( (v50 & 2) != 0 && v51 > 4 )
            {
              v51 -= 4LL;
              v203 = v51;
            }
            v52 = RtlCompareMemoryUlong(v37 + 32, v51, 4277075694LL);
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
          RtlpDeCommitFreeBlock(Src, v37, *(unsigned __int16 *)(v37 + 8), v110);
          v49 = 0;
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (_DWORD)Src, v40, v43, v44, 0LL);
        v49 = 0;
      }
      v173 = v49;
      if ( v49 )
      {
        *((_BYTE *)v4 + 10) = 0;
        *((_BYTE *)v4 + 15) = 0;
        v158 += *(unsigned __int16 *)(v37 + 8);
        v4[4] = v158;
        v4[8 * v158 + 6] = Src[70] ^ v158;
        v33 = v158;
        break;
      }
      v33 = v158;
    }
    v254 = v4;
    v6 = v156;
    v7 = 1;
  }
  if ( v33 < *((_QWORD *)Src + 22) || v33 + *((_QWORD *)Src + 24) < *((_QWORD *)Src + 23) )
  {
    if ( v33 + *((_QWORD *)Src + 24) > *((_QWORD *)Src + 23) && v33 >= 0x100 && v4[6] == Src[70] )
    {
      RtlpDeCommitFreeBlock(Src, v4, v33, 0LL);
      v48 = v155;
      goto LABEL_301;
    }
    if ( v33 > 0xFF00 )
    {
      RtlpInsertFreeBlock(Src, v4);
      v88 = Src + 62;
      goto LABEL_143;
    }
    if ( v6 )
    {
      v53 = (unsigned __int16)v33;
      v204 = (unsigned __int16)v33;
      *((_BYTE *)v4 + 10) = 0;
      *((_BYTE *)v4 + 15) = 0;
      v54 = Src + 168;
      v55 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v55 )
      {
        v199 = 0LL;
        while ( 1 )
        {
          v56 = *((unsigned int *)v55 + 2);
          if ( (unsigned __int16)v33 < v56 )
          {
            v199 = (unsigned __int16)v33;
            v57 = (unsigned __int16)v33;
            goto LABEL_94;
          }
          if ( !*v55 )
            break;
          v55 = (__int64 *)*v55;
        }
        v57 = (unsigned int)(v56 - 1);
        v199 = (unsigned int)v57;
LABEL_94:
        v240 = v55;
        v189 = v57;
        while ( 1 )
        {
          v58 = (unsigned int)(v57 - *((_DWORD *)v55 + 6));
          v59 = 0LL;
          v60 = (_QWORD *)v55[4];
          v184 = v60;
          v61 = (_QWORD *)v60[1];
          if ( v60 == v61 )
          {
            v59 = v60;
          }
          else
          {
            v62 = *((_DWORD *)v61 - 2);
            v214 = v62;
            v215 = v62;
            v259 = v62;
            v63 = v62;
            if ( *((_DWORD *)Src + 31) )
            {
              v62 ^= *((_DWORD *)Src + 34);
              v259 = v62;
              v63 = v62;
              if ( HIBYTE(v62) != ((unsigned __int8)v62 ^ (unsigned __int8)(BYTE1(v62) ^ BYTE2(v62))) )
                RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)v61 - 16, 0, 0LL, 0LL);
              v60 = v184;
            }
            v200 = v62;
            v64 = v63;
            v53 = v204;
            v216 = v204 - v64;
            if ( (int)v204 - v64 > 0 )
            {
              v59 = v60;
            }
            else
            {
              v65 = *v60 - 16LL;
              v66 = *(_DWORD *)(v65 + 8);
              v217 = v66;
              v229 = v66;
              v260 = v66;
              v67 = v66;
              if ( *((_DWORD *)Src + 31) )
              {
                v66 ^= *((_DWORD *)Src + 34);
                v260 = v66;
                v67 = v66;
                v174 = v66 ^ BYTE1(v66) ^ BYTE2(v66);
                if ( HIBYTE(v66) != v174 )
                  RtlpLogHeapFailure(3, (_DWORD)Src, v65, 0, 0LL, 0LL);
                v60 = v184;
              }
              v190 = v66;
              v68 = v67;
              v53 = v204;
              v219 = v204 - v68;
              if ( (int)v204 - v68 <= 0 )
              {
                v59 = (_QWORD *)*v60;
              }
              else if ( !*v55 && (_DWORD)v189 == *((_DWORD *)v55 + 2) - 1 )
              {
                if ( *((_DWORD *)v55 + 3) )
                  v58 = (unsigned int)(2 * v58);
                v218 = v58;
                for ( k = *(_QWORD **)(v55[6] + 8 * v58); v60 != k; k = (_QWORD *)*k )
                {
                  v104 = *((_DWORD *)k - 2);
                  v231 = v104;
                  v230 = v104;
                  v261 = v104;
                  v105 = v104;
                  if ( *((_DWORD *)Src + 31) )
                  {
                    v104 ^= *((_DWORD *)Src + 34);
                    v261 = v104;
                    v105 = v104;
                    v175 = v104 ^ BYTE1(v104) ^ BYTE2(v104);
                    if ( HIBYTE(v104) != v175 )
                    {
                      RtlpLogHeapFailure(3, (_DWORD)Src, (_DWORD)k - 16, 0, 0LL, 0LL);
                      v105 = v104;
                    }
                    v60 = v184;
                  }
                  v191 = v104;
                  v228 = v204 - v105;
                  if ( v228 <= 0 )
                  {
                    v59 = k;
                    break;
                  }
                }
              }
              else
              {
                v205 = 0LL;
                v69 = (unsigned int)v58 >> 5;
                v185 = (unsigned int)v58 >> 5;
                v70 = ((unsigned int)(*((_DWORD *)v55 + 2) - *((_DWORD *)v55 + 6)) >> 5) - 1;
                v71 = (unsigned int *)(v55[5] + 4 * v69);
                v205 = v71;
                v72 = *v71 & (-1 << (v58 & 0x1F));
                while ( !v72 )
                {
                  if ( (unsigned int)v69 > v70 )
                  {
                    v59 = 0LL;
                    goto LABEL_116;
                  }
                  v205 = ++v71;
                  v72 = *v71;
                  LODWORD(v69) = v69 + 1;
                  v185 = v69;
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
                v185 = v74;
                if ( *((_DWORD *)v55 + 3) )
                  v74 = (unsigned int)(2 * v74);
                v221 = v74;
                v59 = *(_QWORD **)(v55[6] + 8 * v74);
              }
            }
          }
LABEL_116:
          v255 = v59;
          if ( v59 )
            break;
          v55 = (__int64 *)*v55;
          v57 = *((unsigned int *)v55 + 6);
          v189 = v57;
          v199 = v57;
        }
        v249 = v59;
        v54 = Src + 168;
      }
      else
      {
        v59 = (_QWORD *)*v54;
      }
      while ( v54 != v59 )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v75 = *((_DWORD *)v59 - 2);
          v220 = v75;
          v222 = v75;
          v262 = v75;
          if ( (v75 & *((_DWORD *)Src + 31)) != 0 )
          {
            v75 ^= *((_DWORD *)Src + 34);
            v262 = v75;
          }
          v76 = v75;
        }
        else
        {
          LOWORD(v75) = *((_WORD *)v59 - 4);
          v76 = v75;
        }
        v162 = v75;
        if ( v53 <= v76 )
          break;
        v59 = (_QWORD *)*v59;
        v54 = Src + 168;
      }
      v77 = v4 + 8;
      v78 = (__int64 *)v59[1];
      if ( (_QWORD *)*v78 == v59 )
      {
        *v77 = v59;
        *((_QWORD *)v4 + 3) = v78;
        *v78 = (__int64)v77;
        v59[1] = v77;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v59, 0, *v78, 0LL);
      }
      *((_QWORD *)Src + 24) += v4[4];
      v79 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v79 )
      {
        v188 = 0LL;
        v80 = v4[4];
        while ( 1 )
        {
          v81 = *((unsigned int *)v79 + 2);
          if ( v80 < v81 )
          {
            v188 = v4[4];
            v82 = v81 - 1;
            goto LABEL_133;
          }
          if ( !*v79 )
            break;
          v79 = (__int64 *)*v79;
        }
        v82 = v81 - 1;
        v188 = (unsigned int)(v81 - 1);
        LODWORD(v80) = v81 - 1;
LABEL_133:
        v241 = v79;
        v83 = v4[4];
        v242 = v4[4];
        v84 = v80 - *((_DWORD *)v79 + 6);
        v85 = 2 * v84;
        if ( !*((_DWORD *)v79 + 3) )
          v85 = v84;
        v188 = v85;
        v223 = v85;
        ++*((_DWORD *)v79 + 4);
        v86 = *(_QWORD *)(v79[6] + 8 * v85);
        if ( (_DWORD)v80 == v82 )
          ++*((_DWORD *)v79 + 5);
        if ( !v86 )
          goto LABEL_138;
        v92 = *(_DWORD *)(v86 - 8);
        v224 = v92;
        v225 = v92;
        v263 = v92;
        v93 = v92;
        if ( *((_DWORD *)Src + 31) )
        {
          v92 ^= *((_DWORD *)Src + 34);
          v263 = v92;
          v93 = v92;
          v182 = v92 ^ BYTE1(v92) ^ BYTE2(v92);
          if ( HIBYTE(v92) != v182 )
          {
            RtlpLogHeapFailure(3, (_DWORD)Src, v86 - 16, 0, 0LL, 0LL);
            v93 = v92;
            v83 = v242;
          }
          LODWORD(v85) = v188;
        }
        v197 = v92;
        v226 = v83 - v93;
        if ( v226 <= 0 )
LABEL_138:
          *(_QWORD *)(v79[6] + 8LL * (unsigned int)v85) = v4 + 8;
        if ( !v86 )
        {
          v87 = (_DWORD *)(v79[5] + 4 * ((unsigned __int64)v84 >> 5));
          *v87 |= 1 << (v84 & 0x1F);
        }
      }
      v88 = Src + 62;
      if ( *((_DWORD *)Src + 31) )
      {
        v177 = *((_BYTE *)v4 + 8) ^ *((_BYTE *)v4 + 9) ^ *((_BYTE *)v4 + 10);
        *((_BYTE *)v4 + 11) = v177;
        *((_DWORD *)v4 + 2) ^= *((_DWORD *)Src + 34);
      }
      goto LABEL_143;
    }
    v135 = (unsigned __int16)v33;
    *((_BYTE *)v4 + 10) &= 0xF0u;
    *((_BYTE *)v4 + 15) = 0;
    if ( (Src[56] & 0x40) == 0 )
    {
LABEL_263:
      v138 = Src + 168;
      if ( *((_QWORD *)Src + 39) )
        Entry = (_QWORD *)RtlpFindEntry(Src, v135);
      else
        Entry = (_QWORD *)*v138;
      while ( v138 != Entry )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v146 = *((_DWORD *)Entry - 2);
          v227 = v146;
          LODWORD(v189) = v146;
          v264 = v146;
          if ( (v146 & *((_DWORD *)Src + 31)) != 0 )
          {
            v146 ^= *((_DWORD *)Src + 34);
            v264 = v146;
          }
          v147 = v146;
        }
        else
        {
          LOWORD(v146) = *((_WORD *)Entry - 4);
          v147 = v146;
        }
        v183 = v146;
        if ( v135 <= v147 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v140 = v4 + 8;
      v141 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v141 == Entry )
      {
        *v140 = Entry;
        *((_QWORD *)v4 + 3) = v141;
        *v141 = (__int64)v140;
        Entry[1] = v140;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v141, 0LL);
      }
      *((_QWORD *)Src + 24) += v4[4];
      v142 = (__int64 *)*((_QWORD *)Src + 39);
      if ( v142 )
      {
        v207 = 0LL;
        v143 = v4[4];
        while ( 1 )
        {
          v144 = *((unsigned int *)v142 + 2);
          if ( v143 < v144 )
            break;
          if ( !*v142 )
          {
            v143 = (unsigned int)(v144 - 1);
            break;
          }
          v142 = (__int64 *)*v142;
        }
        v244 = v142;
        v207 = v143;
        LOBYTE(v144) = 1;
        RtlpHeapAddListEntry((_DWORD)Src, (_DWORD)v142, v144, (_DWORD)v4 + 16, v143, v4[4]);
      }
      v88 = Src + 62;
      if ( *((_DWORD *)Src + 31) )
      {
        v178 = *((_BYTE *)v4 + 8) ^ *((_BYTE *)v4 + 9) ^ *((_BYTE *)v4 + 10);
        *((_BYTE *)v4 + 11) = v178;
        *((_DWORD *)v4 + 2) ^= *((_DWORD *)Src + 34);
      }
LABEL_143:
      v89 = updated;
      if ( updated )
      {
        if ( *v88 )
        {
          *((_DWORD *)v4 + 2) ^= *((_DWORD *)Src + 34);
          v179 = *((_DWORD *)v4 + 2) ^ BYTE1(*((_DWORD *)v4 + 2)) ^ HIWORD(*((_DWORD *)v4 + 2));
          if ( *((_BYTE *)v4 + 11) != v179 )
          {
            RtlpAnalyzeHeapFailure(Src, v4);
            v89 = updated;
          }
        }
        *((_BYTE *)v4 + 10) |= 2u;
        v132 = v4[4];
        v133 = &v4[8 * v132];
        if ( *v88 )
        {
          v163 = HIBYTE(v132) ^ *((_BYTE *)v4 + 10) ^ v132;
          *((_BYTE *)v4 + 11) = v163;
          *((_DWORD *)v4 + 2) ^= *((_DWORD *)Src + 34);
        }
        *(v133 - 2) = v89;
        *(v133 - 1) = 0;
        v7 = 1;
        if ( (*((_DWORD *)Src + 28) & 0x8000000) != 0 )
        {
          v193 = RtlLogStackBackTraceEx(1LL);
          *(v133 - 1) = v193;
          v48 = v155;
          goto LABEL_301;
        }
      }
      else
      {
        v7 = 1;
      }
      goto LABEL_68;
    }
    v136 = v4 + 16;
    v243 = (char *)(v4 + 16);
    v137 = (16 * (unsigned __int64)(unsigned int)v135 - 32) >> 2;
    v206 = v137;
    if ( v137 )
    {
      if ( ((unsigned __int8)v136 & 4) == 0 )
        goto LABEL_260;
      *v136 = -17891602;
      v206 = --v137;
      if ( v137 )
      {
        v136 = v4 + 18;
        v243 = (char *)(v4 + 18);
LABEL_260:
        memset64(v136, 0xFEEEFEEEFEEEFEEEuLL, v137 >> 1);
        if ( (v137 & 1) != 0 )
          v136[v137 - 1] = -17891602;
      }
    }
    *((_BYTE *)v4 + 10) |= 4u;
    goto LABEL_263;
  }
  RtlpDeCommitFreeBlock(Src, v4, v33, 0LL);
LABEL_68:
  v48 = v155;
LABEL_301:
  v149 = 256;
  if ( v48 )
  {
    if ( (*((_DWORD *)Src + 29) & 0x1000000) == 0 )
    {
      ++*((_DWORD *)Src + 160);
      v150 = *((_DWORD *)Src + 162);
      if ( *((_DWORD *)Src + 160) > v150 )
      {
        *((_DWORD *)Src + 160) = 0;
        v153 = *((_QWORD *)Src + 72) - 16LL * *((_QWORD *)Src + 24);
        if ( v153 > *((_QWORD *)Src + 84) )
          *((_QWORD *)Src + 84) = v153;
        *((_QWORD *)Src + 85) = v153;
      }
      v151 = Src + 326;
      if ( ++*((_DWORD *)Src + 163) >= 0x1000u )
      {
        v154 = (char *)(Src + 326);
        if ( *((_BYTE *)Src + 418) != 2 || (v154 = (char *)(Src + 326), *((_DWORD *)Src + 164) <= 0x10u) )
          v149 = 16;
        if ( *((_DWORD *)Src + 161) > v149 && v150 < 0x10000 )
        {
          *((_DWORD *)Src + 162) = 2 * v150;
          v151 = v154;
        }
        *((_DWORD *)Src + 161) = 0;
        *v151 = 0;
      }
    }
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  }
  return v7;
}
