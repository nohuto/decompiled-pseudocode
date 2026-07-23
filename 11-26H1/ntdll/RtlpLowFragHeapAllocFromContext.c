/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x180007FA0
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x180001D14 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180001DD4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpIsSubSegmentReuseable @ 0x180001ED0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180002020 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpSetSegmentInfo @ 0x180007690 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180007840 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800952F8 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x1800953FC (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpSubSegmentInitialize @ 0x180095A70 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800D9AD0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180162C80 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180163440 (RtlGetCurrentProcessorNumberEx.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  bool v4; // zf
  unsigned int v5; // r15d
  unsigned __int16 *v7; // r13
  struct _TEB *v8; // rdi
  void *UniqueThread; // rax
  __int64 v10; // rbx
  __int64 HeapThreadData_low; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned __int16 *v15; // rax
  volatile signed __int32 *v16; // rdx
  __int64 v17; // rbx
  int v18; // r15d
  __int64 v19; // rbp
  unsigned int v20; // r9d
  unsigned int v21; // edx
  signed __int32 v22; // r8d
  __int64 v23; // r14
  struct _TEB *v24; // r9
  __int64 v25; // r11
  unsigned __int64 v26; // r10
  char v27; // cl
  int v28; // r11d
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // r9
  unsigned int v32; // r11d
  __int64 v35; // rax
  unsigned int v38; // r9d
  unsigned int v39; // ebp
  __int64 v40; // rax
  __int64 v41; // rbx
  volatile signed __int64 *v42; // r12
  unsigned __int16 *v43; // r15
  volatile signed __int32 *v44; // rdi
  unsigned __int16 *v45; // rax
  volatile signed __int64 *v46; // rsi
  unsigned int v47; // r14d
  volatile signed __int64 *v48; // rbx
  __int64 v49; // rbp
  volatile signed __int32 *v50; // rdx
  unsigned __int16 *v51; // r12
  __int64 v52; // r13
  _SLIST_HEADER *v53; // rbp
  PSLIST_ENTRY v54; // rax
  __int64 v55; // r8
  __int64 *v56; // r9
  __int64 *v57; // rbx
  PSLIST_ENTRY v58; // r14
  __int64 v59; // rcx
  unsigned int v60; // r14d
  _SLIST_ENTRY *v61; // rbx
  _SLIST_ENTRY *v62; // r15
  _SLIST_HEADER *v63; // rbp
  PSLIST_ENTRY v64; // rsi
  __int64 v65; // r8
  signed __int32 v66; // eax
  __int64 j; // r8
  _DWORD *v68; // rcx
  __int64 v69; // rcx
  char v70; // dl
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  _DWORD *v73; // rcx
  __int64 v74; // rcx
  signed __int32 v75; // eax
  __int64 i; // r8
  __int64 v77; // rax
  volatile signed __int32 *v78; // rdx
  __int64 *v79; // rcx
  __int64 v80; // rcx
  char v81; // r8
  _DWORD *SharedData; // rcx
  __int64 v83; // rcx
  _DWORD *v84; // rcx
  __int64 v85; // rcx
  _QWORD *v86; // rsi
  __int64 v87; // rax
  __int64 v88; // r14
  unsigned __int64 v89; // r14
  unsigned __int64 v91; // rax
  signed __int64 v92; // rcx
  unsigned __int64 v93; // rtt
  unsigned int v94; // edx
  __int64 v95; // rcx
  __int64 v96; // rbp
  unsigned __int16 *v97; // rdi
  unsigned int v98; // r10d
  int v99; // r8d
  unsigned int v100; // r9d
  signed __int64 v101; // rcx
  bool v102; // r11
  unsigned int v103; // r11d
  char v104; // cl
  char v105; // dl
  unsigned int v106; // edx
  unsigned int v107; // eax
  unsigned int v108; // esi
  unsigned int v109; // esi
  bool v110; // r12
  __int64 v111; // r13
  __int64 v112; // rbx
  _BYTE *v113; // rdi
  unsigned __int64 v114; // rax
  __int64 v115; // rsi
  _DWORD *v116; // rcx
  __int64 v117; // rcx
  unsigned int v118; // edx
  unsigned __int64 v119; // rax
  __int64 v120; // rsi
  PSLIST_ENTRY v121; // rax
  ULONG v122; // r8d
  __int64 v123; // r9
  volatile signed __int32 *v124; // rbx
  __int64 v125; // r13
  __int64 v126; // r9
  signed __int32 v127; // eax
  __int64 *v128; // r8
  _DWORD *v129; // rcx
  __int64 v130; // rcx
  char v131; // dl
  _DWORD *v132; // rcx
  __int64 v133; // rcx
  _DWORD *v134; // rcx
  __int64 v135; // rcx
  signed __int32 v136; // eax
  __int64 v137; // rax
  __int64 **v138; // rdx
  __int64 *v139; // rcx
  signed __int32 v140; // eax
  signed __int32 v141; // ett
  int v142; // eax
  signed __int32 v143; // eax
  __int64 v144; // rax
  __int64 *v145; // rcx
  __int64 v146; // rcx
  _QWORD **v147; // rdx
  PRTL_CRITICAL_SECTION *v148; // r15
  __int64 v149; // r14
  _RTL_CRITICAL_SECTION *v150; // rcx
  char *v151; // rbp
  _BYTE *Heap_0; // rax
  __int16 v153; // ax
  _DWORD *v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rdi
  char *v157; // rcx
  unsigned __int32 v158; // eax
  unsigned __int32 v159; // eax
  __int64 v160; // rax
  signed __int32 v161; // eax
  __int64 v162; // rax
  __int64 *v163; // rcx
  signed __int32 v164; // ett
  __int64 v165; // rax
  signed __int32 v166; // eax
  __int64 *v167; // r9
  __int64 k; // r8
  __int64 v169; // rax
  volatile signed __int32 *v170; // rdx
  __int64 *v171; // rcx
  __int64 v172; // rcx
  PSLIST_ENTRY v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // [rsp+30h] [rbp-A8h]
  unsigned __int16 *v178; // [rsp+38h] [rbp-A0h]
  signed __int64 v179; // [rsp+38h] [rbp-A0h]
  char v180; // [rsp+40h] [rbp-98h]
  ULONG OldProtect; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v182; // [rsp+50h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-78h] BYREF
  __int64 v185; // [rsp+68h] [rbp-70h]
  __int64 v186; // [rsp+70h] [rbp-68h]
  __int64 v187; // [rsp+78h] [rbp-60h]
  PSLIST_HEADER ListHead; // [rsp+80h] [rbp-58h]
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v191; // [rsp+F0h] [rbp+18h]
  int v192; // [rsp+F8h] [rbp+20h]

  v192 = a4;
  v191 = a3;
  v4 = (*(_BYTE *)(a1 + 672) & 1) == 0;
  v5 = 0;
  ProcessorNumber = 0;
  v180 = 0;
  v7 = (unsigned __int16 *)(a1 + 676 + 4LL * a2);
  v182 = v7;
  if ( v4 && (*((_BYTE *)v7 + 3) & 1) != 0 )
  {
    v8 = NtCurrentTeb();
    UniqueThread = v8->ClientId.UniqueThread;
    v10 = (unsigned int)UniqueThread;
    HeapThreadData_low = LOBYTE(v8->HeapThreadData);
    v5 = HeapThreadData_low - 1;
    v180 = HeapThreadData_low - 1;
    if ( (int)HeapThreadData_low - 1 < 0 || RtlpAffinityState[HeapThreadData_low] != (unsigned int)UniqueThread )
    {
      RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
      v12 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number);
      v5 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number);
      v180 = BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number;
      LOBYTE(v8->HeapThreadData) = (BYTE4(RtlpAffinityState[0]) & ProcessorNumber.Number) + 1;
      qword_1801CB7E8[v12] = v10;
    }
  }
  v13 = *((unsigned __int8 *)v7 + 2);
  v185 = 16LL * *v7;
  ListHead = (PSLIST_HEADER)(a1 + 48 * (v5 + 68LL));
  if ( v5 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192LL * v5;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  v177 = v14;
LABEL_11:
  while ( 2 )
  {
    while ( 2 )
    {
      v17 = *(_QWORD *)(v14 + 8);
      if ( v17 )
      {
        v18 = 0;
        v19 = *(_QWORD *)(*(_QWORD *)v14 + 24LL);
        if ( (HIWORD(*(_DWORD *)(v17 + 32)) & 0x8000u) != 0 )
        {
          v18 = 1;
          v156 = v19 + 4LL * *(unsigned __int16 *)(v14 + 172);
          if ( (*(_BYTE *)(v156 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(
                      *(_QWORD *)(*(_QWORD *)v14 + 24LL),
                      *(unsigned __int8 *)(v156 + 678)) >= 0 )
          {
            *(_BYTE *)(v156 + 679) |= 1u;
            v157 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v157 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v19 + 24), *(unsigned __int8 *)(v156 + 678));
          }
        }
        v20 = 0;
        v21 = 0;
        if ( MEMORY[0x7FFE036A] > 1u )
          v20 = 100;
        while ( 1 )
        {
          if ( v21 > v20 )
            goto LABEL_94;
          v22 = *(_DWORD *)(v17 + 32);
          if ( (v22 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v22 )
              goto LABEL_94;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v22 | 0x80000000, v22) == v22 )
              break;
          }
          ++v21;
        }
        if ( v22 == -1 )
          goto LABEL_94;
        v23 = *(_QWORD *)(v17 + 8);
        if ( v23 && *(_QWORD *)v17 == v14 && (_WORD)v22 )
        {
          v24 = NtCurrentTeb();
          v25 = BYTE2(v24->HeapThreadData);
          v26 = RtlpSearchWidth[*(unsigned __int16 *)(v14 + 172)];
          if ( (_BYTE)v25 == HIBYTE(v24->HeapThreadData) )
          {
            v91 = qword_1801C5F00;
            do
            {
              v92 = v91 ^ (v91 >> 12) ^ ((v91 ^ (v91 >> 12)) << 25) ^ ((v91 ^ (v91 >> 12) ^ ((v91 ^ (v91 >> 12)) << 25)) >> 27);
              v93 = v91;
              v91 = _InterlockedCompareExchange64(&qword_1801C5F00, v92, v91);
            }
            while ( v93 != v91 );
            v27 = 29 * v92;
            HIBYTE(v24->HeapThreadData) = v27;
          }
          else
          {
            v27 = BYTE2(v24->HeapThreadData);
          }
          BYTE2(v24->HeapThreadData) = v27 + 1;
          v28 = RtlpLowFragHeapRandomData[v25];
          v29 = *(_QWORD *)(v23 + 32);
          v30 = *(_QWORD *)(v23 + 40);
          if ( v29 >= 0x40 )
          {
            v86 = (_QWORD *)(v30 + 8 * ((v29 - 1) >> 6));
            v31 = (_QWORD *)(v30 + 8 * ((unsigned __int64)(unsigned int)(v22 >> 16) >> 6));
            do
            {
              if ( *v31 != -1LL )
                break;
              if ( v31 == v86 )
                v31 = *(_QWORD **)(v23 + 40);
              else
                ++v31;
            }
            while ( v31 != (_QWORD *)(v30 + 8 * ((unsigned __int64)(unsigned int)(v22 >> 16) >> 6)) );
            if ( v31 == v86 && (v94 = v29 & 0x3F) != 0 )
            {
              v14 = v177;
              if ( v94 < v26 )
                LODWORD(v26) = *(_DWORD *)(v23 + 32) & 0x3F;
            }
            else
            {
              v14 = v177;
            }
          }
          else
          {
            v31 = *(_QWORD **)(v23 + 40);
            if ( v29 >= v26 )
              LODWORD(v29) = v26;
            LODWORD(v26) = v29;
          }
          v32 = (unsigned int)(v26 * v28) >> 8;
          if ( (unsigned int)v26 >= 0x40 )
          {
            v35 = -1LL;
          }
          else
          {
            _RAX = ~*v31;
            __asm { tzcnt   rdx, rax }
            LOBYTE(v32) = _RDX + v32;
            v35 = ((1LL << v26) - 1) << _RDX;
          }
          _RAX = ~__ROR8__(*v31 | ~v35, v32);
          __asm { tzcnt   rax, rax }
          LODWORD(_RAX) = ((_BYTE)v32 + (_BYTE)_RAX) & 0x3F;
          *v31 |= 1LL << _RAX;
          v38 = (unsigned int)(((__int64)v31 - *(_QWORD *)(v23 + 40)) >> 3) << 6;
          *(_DWORD *)(v17 + 32) = ((v38 + (_DWORD)_RAX) << 16) | ((unsigned __int16)v22 - 1);
          v39 = RtlpLFHKey ^ v23 ^ *(_DWORD *)(v23 + 24) ^ v19;
          v40 = v23 + (v38 + (_DWORD)_RAX) * HIWORD(v39);
          v41 = v40 + (unsigned __int16)v39;
          if ( (*(_BYTE *)(v41 + 15) & 0x3F) != 0 )
          {
            RtlpLogHeapFailure(
              15,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 24LL) + 24LL),
              v40 + (unsigned __int16)v39,
              0,
              0LL,
              0LL);
LABEL_94:
            v41 = 0LL;
          }
        }
        else
        {
          *(_DWORD *)(v17 + 32) = v22;
          v41 = 0LL;
        }
        if ( v18 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
          _InterlockedCompareExchange(
            (_DWORD *)RtlpAffinityState + 1,
            2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
            SHIDWORD(RtlpAffinityState[0]));
        if ( v41 )
        {
          v88 = v185;
          if ( (v192 & 8) != 0 )
            memset_thunk_772440563353939046((void *)(v41 + 16), 0, v185 - 8);
          v89 = v88 - v191;
          if ( v89 >= 0x3F )
          {
            *(_QWORD *)(v41 + 16LL * *v182) = v89;
            *(_BYTE *)(v41 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v41 + 15) = v89 | 0x80;
          }
          return v41 + 16;
        }
      }
      v42 = (volatile signed __int64 *)(v14 + 16);
      v187 = *(_QWORD *)v14;
      v186 = v14 + 16;
LABEL_36:
      v43 = (unsigned __int16 *)(v14 + 172);
      v44 = 0LL;
      v178 = (unsigned __int16 *)(v14 + 172);
      while ( 2 )
      {
        v45 = v178;
        v46 = 0LL;
        v47 = 0;
        v48 = v42;
        v49 = 16LL;
        do
        {
          v50 = (volatile signed __int32 *)*v48;
          v51 = v45;
          v178 = v45;
          if ( *v48 && *((unsigned __int16 *)v50 + 16) > v47 )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v87 = *v45, (unsigned int)v87 > 0x70)
              || *(_DWORD *)(v177 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v87]
              || (v81 = 1, (unsigned int)(*((_WORD *)v50 + 20) >> 2) <= *((_WORD *)v50 + 16)) )
            {
              v81 = 0;
            }
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v83 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v83 = 2147353482LL;
            if ( !*(_BYTE *)v83 )
            {
              v84 = NtCurrentPeb()->SharedData;
              if ( v84 && *v84 )
                v85 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v85 = 2147353472LL;
              if ( !*(_BYTE *)v85 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
              {
                if ( v81 )
                  goto LABEL_40;
LABEL_92:
                v44 = (volatile signed __int32 *)*v48;
                v47 = *((unsigned __int16 *)v50 + 16);
                v46 = v48;
                goto LABEL_40;
              }
            }
            if ( !v81 )
              goto LABEL_92;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v177 + 24LL) + 24LL),
              *((_QWORD *)v50 + 1),
              *v51);
          }
LABEL_40:
          ++v48;
          v45 = v43;
          --v49;
        }
        while ( v49 );
        v42 = (volatile signed __int64 *)v186;
        v52 = v187;
        if ( v46 )
        {
          v53 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v187 + 24) + 8LL * *v178 + 1192) + 144LL);
          while ( 1 )
          {
            v54 = RtlpInterlockedPopEntrySList(v53);
            v57 = (__int64 *)v54;
            v58 = v54;
            if ( !v54 )
              break;
            v57 = (__int64 *)&v54[-3];
            if ( (*((_DWORD *)&v54[-1].Next + 3) & 1) != 0 )
            {
              if ( !(unsigned int)RtlpSetSegmentInfo(v57, v177) )
              {
                RtlpInterlockedPushEntrySList(v53, v58, v55, v56);
                v57 = 0LL;
              }
              break;
            }
            _m_prefetchw((char *)v57 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v57 + 11, 0xFFFFFFFD) == 2 )
            {
              v95 = *(_QWORD *)*v57;
              *v57 = 0LL;
              RtlpInterlockedPushEntrySList(v95, v54, v55, v56);
            }
          }
          if ( v44 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v46,
                                                   (signed __int64)v57,
                                                   (signed __int64)v44) )
          {
            if ( v57 )
              RtlpInterlockedPushEntrySList(v53, v57 + 6, v55, v56);
            continue;
          }
          if ( !v57 )
            *(_WORD *)(v177 + 174) = (unsigned __int8)(((__int64)v46 - v177 - 16) >> 3);
          if ( v44 )
          {
            _m_prefetchw((const void *)(v44 + 11));
            if ( _InterlockedAnd(v44 + 11, 0xFFFFFFFD) != 2 )
              goto LABEL_53;
            v59 = **(_QWORD **)v44;
            *(_QWORD *)v44 = 0LL;
            RtlpInterlockedPushEntrySList(v59, v44 + 12, v55, v56);
            v14 = v177;
            goto LABEL_36;
          }
        }
        else
        {
          v44 = 0LL;
        }
        break;
      }
      v60 = 0;
      v61 = 0LL;
      v62 = 0LL;
      v63 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v52 + 24) + 8LL * *v178 + 1192) + 144LL);
      v64 = RtlpInterlockedPopEntrySList(v63);
      if ( !v64 )
        goto LABEL_52;
      while ( 2 )
      {
        v44 = (volatile signed __int32 *)&v64[-3];
        if ( (*((_DWORD *)&v64[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v44 + 11));
          if ( _InterlockedAnd(v44 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_346;
LABEL_349:
          v174 = **(_QWORD **)v44;
          *(_QWORD *)v44 = 0LL;
          RtlpInterlockedPushEntrySList(v174, v64, v65, v56);
          goto LABEL_346;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo((__int64 *)&v64[-3], v177) )
        {
          v64->Next = v61;
          v173 = v64;
          v61 = v64;
          if ( v60 )
            v173 = v62;
          ++v60;
          v62 = v173;
          goto LABEL_346;
        }
        _m_prefetchw((const void *)(v44 + 11));
        if ( _InterlockedAnd(v44 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_349;
        if ( RtlpIsSubSegmentReuseable(v177, (__int64)&v64[-3]) )
          break;
LABEL_346:
        v44 = 0LL;
        v64 = RtlpInterlockedPopEntrySList(v63);
        if ( v64 )
          continue;
        break;
      }
      if ( v60 )
        InterlockedPushListSList(v63, v61, v62, v60);
LABEL_52:
      if ( v44 )
      {
LABEL_53:
        *((_BYTE *)v44 + 43) = v180;
        do
        {
          v66 = *((_DWORD *)v44 + 11);
          v14 = v177;
          if ( !v66 || (v66 & 6) != 0 )
            goto LABEL_11;
        }
        while ( v66 != _InterlockedCompareExchange(v44 + 11, v66 | 6, v66) );
        j = *(_QWORD *)v44;
        if ( *(_QWORD *)v44 == v177 )
        {
          v68 = NtCurrentPeb()->SharedData;
          if ( v68 && *v68 )
            v69 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v69 = 2147353472LL;
          if ( *(_BYTE *)v69 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v177 + 24LL) + 24LL), *((_QWORD *)v44 + 1));
          v44 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v177 + 8), (__int64)v44);
          if ( !v44 )
            continue;
          _m_prefetchw((const void *)(v44 + 11));
          if ( _InterlockedAnd(v44 + 11, 0xFFFFFFF9) == 6 )
          {
LABEL_281:
            v147 = (_QWORD **)(v44 + 12);
            v146 = **(_QWORD **)v44;
            *(_QWORD *)v44 = 0LL;
            goto LABEL_282;
          }
          if ( *((_WORD *)v44 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v160 = *v178, (unsigned int)v160 > 0x70)
              || *(_DWORD *)(v177 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v160]
              || (v70 = 1, (unsigned int)(*((_WORD *)v44 + 20) >> 2) <= *((_WORD *)v44 + 16)) )
            {
              v70 = 0;
            }
            v71 = NtCurrentPeb()->SharedData;
            if ( v71 && *v71 )
              v72 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v72 = 2147353482LL;
            if ( *(_BYTE *)v72
              || ((v73 = NtCurrentPeb()->SharedData) == 0LL || !*v73
                ? (v74 = 2147353472LL)
                : (v74 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v74 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v70 )
                goto LABEL_73;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v177 + 24LL) + 24LL),
                *((_QWORD *)v44 + 1),
                *v178);
            }
            else if ( !v70 )
            {
LABEL_73:
              while ( 1 )
              {
                v75 = *((_DWORD *)v44 + 11);
                if ( !v75 || (v75 & 2) != 0 )
                  break;
                if ( v75 == _InterlockedCompareExchange(v44 + 11, v75 | 2, v75) )
                {
                  v56 = *(__int64 **)v44;
                  for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
                  {
                    v77 = ((_BYTE)i + (unsigned __int8)*((_WORD *)v56 + 87)) & 0xF;
                    v78 = (volatile signed __int32 *)v56[v77 + 2];
                    v79 = &v56[v77];
                    if ( v78 )
                    {
                      if ( (v78[11] & 1) == 0
                        && v78 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                               v79 + 2,
                                                               (signed __int64)v44,
                                                               (signed __int64)v78) )
                      {
                        _m_prefetchw((const void *)(v78 + 11));
                        if ( _InterlockedAnd(v78 + 11, 0xFFFFFFFD) == 2 )
                        {
                          v80 = **(_QWORD **)v78;
                          *(_QWORD *)v78 = 0LL;
                          RtlpInterlockedPushEntrySList(v80, v78 + 12, i, v56);
                        }
                        goto LABEL_11;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v79 + 2, (signed __int64)v44, 0LL) )
                    {
                      goto LABEL_11;
                    }
                  }
                  goto LABEL_9;
                }
              }
            }
          }
        }
        else
        {
          _m_prefetchw((const void *)(v44 + 11));
          if ( _InterlockedAnd(v44 + 11, 0xFFFFFFF9) == 6 )
            goto LABEL_281;
          if ( RtlpIsSubSegmentReuseable(j, (__int64)v44) )
          {
            while ( 1 )
            {
              v161 = *((_DWORD *)v44 + 11);
              if ( !v161 || (v161 & 2) != 0 )
                break;
              if ( v161 == _InterlockedCompareExchange(v44 + 11, v161 | 2, v161) )
              {
                v56 = *(__int64 **)v44;
                for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                {
                  if ( (unsigned int)j >= 0x10 )
                  {
LABEL_9:
                    v15 = *(unsigned __int16 **)v44;
                    v16 = v44 + 12;
                    goto LABEL_10;
                  }
                  v162 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v56 + 87)) & 0xF;
                  v138 = (__int64 **)v56[v162 + 2];
                  v163 = &v56[v162];
                  if ( v138 )
                  {
                    if ( (*((_DWORD *)v138 + 11) & 1) == 0
                      && v138 == (__int64 **)_InterlockedCompareExchange64(
                                               v163 + 2,
                                               (signed __int64)v44,
                                               (signed __int64)v138) )
                    {
                      _m_prefetchw((char *)v138 + 44);
                      v140 = *((_DWORD *)v138 + 11);
                      do
                      {
                        v164 = v140;
                        v140 = _InterlockedCompareExchange(
                                 (volatile signed __int32 *)v138 + 11,
                                 v140 & 0xFFFFFFFD,
                                 v140);
                      }
                      while ( v164 != v140 );
                      goto LABEL_222;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(v163 + 2, (signed __int64)v44, 0LL) )
                  {
                    goto LABEL_11;
                  }
                }
              }
            }
          }
        }
        continue;
      }
      break;
    }
    v96 = a1;
    v97 = v182;
    v98 = *(_DWORD *)(v177 + 160);
    v99 = *(_DWORD *)(a1 + 672) & 2;
    v100 = *((unsigned __int8 *)v182 + 2);
    LODWORD(v179) = 0;
    do
    {
      v101 = *(_QWORD *)(a1 + 80);
      v102 = 0;
      if ( (_DWORD)v101 == v100 )
      {
        v102 = HIDWORD(v101) > 7;
        v142 = HIDWORD(v101) + 1;
        if ( HIDWORD(v101) > 7 )
          v142 = 0;
        HIDWORD(v179) = v142;
      }
      else
      {
        v179 = v100 | 0x100000000LL;
      }
    }
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v179, v101) != v101 );
    if ( !v102 || v99 )
      v98 >>= (v99 != 0) + 3;
    v103 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v97 + 2)];
    v104 = (*((_BYTE *)v97 + 3) & 1) - 1;
    if ( v103 >= 0x100 )
      v104 = *((_BYTE *)v97 + 3) & 1;
    v105 = v104 - 1;
    if ( !*(_DWORD *)(v177 + 164) )
      v105 = v104;
    v106 = 1 << (3 - v105);
    if ( v98 >= v106 )
      v106 = v98;
    if ( v106 < 4 )
    {
      v106 = 4;
    }
    else if ( v106 > 0x400 )
    {
      v106 = 1024;
    }
    v107 = ((((unsigned __int64)v106 + 31) >> 3) & 0xFFFFFFFC) + 68 + v106 * (v103 + 16);
    if ( v107 >= 0xF0000 )
      v107 = 983040;
    _BitScanReverse(&v108, v107 - 1);
    v109 = v108 + 1;
    if ( v109 <= 7 )
    {
      LOBYTE(v109) = 7;
    }
    else if ( v109 >= 0x12 )
    {
      LOBYTE(v109) = 18;
    }
    if ( (*((_BYTE *)v97 + 3) & 6) != 0 )
      LOBYTE(v109) = 18;
    v110 = (_BYTE)v109 == 18 || v98 >= 0x400;
    v111 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v97 + 2)];
    v112 = a1 + 48LL * (unsigned __int8)v109;
    ++*(_WORD *)(v112 - 212);
    v113 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v112 - 240));
    if ( v113 )
    {
      ++*(_WORD *)(v112 - 208);
      goto LABEL_165;
    }
    if ( (unsigned __int8)v109 > 7u
      && (v113 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * ((unsigned __int8)v109 - 6LL)))) != 0LL )
    {
LABEL_165:
      v114 = 1LL << v113[16];
      if ( v114 > 0xF0000 )
        v114 = 983040LL;
      v115 = v114 + *((unsigned __int16 *)v113 + 9);
      v116 = NtCurrentPeb()->SharedData;
      if ( v116 && *v116 )
        v117 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v117 = 2147353472LL;
      if ( *(_BYTE *)v117 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), (__int64)v113, v115, v111 + 16);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v115);
    }
    else
    {
      v148 = *(PRTL_CRITICAL_SECTION **)(a1 + 24);
      BaseAddress = 0LL;
      OldProtect = 0;
      v149 = 1LL << v109;
      v150 = v148[44];
      RegionSize = 0LL;
      if ( (unsigned __int64)(1LL << v109) > 0xF0000 )
        v149 = 983040LL;
      v151 = (char *)(v149 + 0x2000);
      if ( !v110 )
        v151 = (char *)v149;
      RtlEnterCriticalSection(v150);
      Heap_0 = RtlAllocateHeap_0(v148, 0x800001u, (SIZE_T)v151);
      v113 = Heap_0;
      if ( Heap_0 )
      {
        if ( v110 )
        {
          BaseAddress = (PVOID)((unsigned __int64)&Heap_0[v149 + 4095] & 0xFFFFFFFFFFFFF000uLL);
          v151 = (char *)((_BYTE *)BaseAddress - Heap_0);
          v113 = RtlReAllocateHeap_0(v148, 0x800001u, Heap_0, (_BYTE *)BaseAddress - Heap_0 + 4096);
          RtlLeaveCriticalSection(v148[44]);
          RegionSize = 4096LL;
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
          v113[17] = 1;
          v153 = (_WORD)v151 - v149;
        }
        else
        {
          RtlLeaveCriticalSection(v148[44]);
          v153 = 0;
          v113[17] = 0;
        }
        *((_WORD *)v113 + 9) = v153;
        v113[16] = v109;
        v154 = NtCurrentPeb()->SharedData;
        if ( v154 && *v154 )
          v155 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v155 = 2147353472LL;
        if ( *(_BYTE *)v155 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentAlloc((__int64)v148, (__int64)v113, (__int64)v151, v111 + 16, 1);
        _InterlockedIncrement((volatile signed __int32 *)(v112 - 224));
      }
      else
      {
        RtlLeaveCriticalSection(v148[44]);
      }
      v96 = a1;
    }
    v118 = *(unsigned __int16 *)(v112 - 212);
    if ( v118 > 0x40 )
    {
      if ( v118 < *(unsigned __int16 *)(v112 - 210) + (*(unsigned __int16 *)(v112 - 210) >> 1)
        && *(unsigned __int16 *)(v112 - 208) < v118 - (v118 >> 1) )
      {
        v158 = *(_DWORD *)(v112 - 220);
        if ( v158 >= 2 )
        {
          v159 = *(_DWORD *)(v112 - 216);
          if ( v159 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v112 - 216), v159 - 1, v159);
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v112 - 220), v158 + 1, v158);
        }
      }
      *(_WORD *)(v112 - 212) = 0;
      *(_WORD *)(v112 - 210) = 0;
      *(_WORD *)(v112 - 208) = 0;
    }
    if ( !v113 )
      return 0LL;
    v119 = 1LL << v113[16];
    if ( v119 > 0xF0000 )
      v119 = 983040LL;
    v120 = v119 + *((unsigned __int16 *)v113 + 9);
    _InterlockedIncrement((volatile signed __int32 *)(v96 + 56));
    v121 = RtlpInterlockedPopEntrySList(ListHead);
    if ( v121 )
    {
      v124 = (volatile signed __int32 *)&v121[-3];
      break;
    }
    v124 = (volatile signed __int32 *)RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)v96);
    if ( v124 )
    {
      *((_QWORD *)v124 + 1) = 0LL;
LABEL_178:
      v125 = (__int64)v182;
      *((_BYTE *)v124 + 43) = v180;
      RtlpSubSegmentInitialize(
        v96,
        (_DWORD)v124,
        (_DWORD)v113,
        (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v125 + 2)],
        v120,
        v125);
      do
      {
        v127 = *((_DWORD *)v124 + 11);
        if ( !v127 || (v127 & 6) != 0 )
        {
          v14 = v177;
          goto LABEL_213;
        }
      }
      while ( v127 != _InterlockedCompareExchange(v124 + 11, v127 | 6, v127) );
      v128 = *(__int64 **)v124;
      v14 = v177;
      if ( *(_QWORD *)v124 == v177 )
      {
        v129 = NtCurrentPeb()->SharedData;
        if ( v129 && *v129 )
          v130 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v130 = 2147353472LL;
        if ( *(_BYTE *)v130 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v177 + 24LL) + 24LL), *((_QWORD *)v124 + 1));
        v124 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v177 + 8), (__int64)v124);
        if ( v124 )
        {
          _m_prefetchw((const void *)(v124 + 11));
          if ( _InterlockedAnd(v124 + 11, 0xFFFFFFF9) == 6 )
          {
            v175 = **(_QWORD **)v124;
            *(_QWORD *)v124 = 0LL;
            RtlpInterlockedPushEntrySList(v175, v124 + 12, v128, v126);
          }
          else if ( *((_WORD *)v124 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v165 = *(unsigned __int16 *)(v177 + 172), (unsigned int)v165 > 0x70)
              || *(_DWORD *)(v177 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v165]
              || (v131 = 1, (unsigned int)(*((_WORD *)v124 + 20) >> 2) <= *((_WORD *)v124 + 16)) )
            {
              v131 = 0;
            }
            v132 = NtCurrentPeb()->SharedData;
            if ( v132 && *v132 )
              v133 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v133 = 2147353482LL;
            if ( *(_BYTE *)v133
              || ((v134 = NtCurrentPeb()->SharedData) == 0LL || !*v134
                ? (v135 = 2147353472LL)
                : (v135 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v135 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v131 )
                goto LABEL_198;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v177 + 24LL) + 24LL),
                *((_QWORD *)v124 + 1),
                *(unsigned __int16 *)(v177 + 172));
            }
            else if ( !v131 )
            {
LABEL_198:
              while ( 1 )
              {
                v136 = *((_DWORD *)v124 + 11);
                if ( !v136 || (v136 & 2) != 0 )
                  break;
                if ( v136 == _InterlockedCompareExchange(v124 + 11, v136 | 2, v136) )
                {
                  v56 = *(__int64 **)v124;
                  for ( j = 0LL; (unsigned int)j < 0x10; j = (unsigned int)(j + 1) )
                  {
                    v137 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v56 + 87)) & 0xF;
                    v138 = (__int64 **)v56[v137 + 2];
                    v139 = &v56[v137];
                    if ( v138 )
                    {
                      if ( (*((_DWORD *)v138 + 11) & 1) == 0
                        && v138 == (__int64 **)_InterlockedCompareExchange64(
                                                 v139 + 2,
                                                 (signed __int64)v124,
                                                 (signed __int64)v138) )
                      {
                        _m_prefetchw((char *)v138 + 44);
                        v140 = *((_DWORD *)v138 + 11);
                        do
                        {
                          v141 = v140;
                          v140 = _InterlockedCompareExchange(
                                   (volatile signed __int32 *)v138 + 11,
                                   v140 & 0xFFFFFFFD,
                                   v140);
                        }
                        while ( v141 != v140 );
LABEL_222:
                        if ( v140 == 2 )
                        {
                          v146 = **v138;
                          *v138 = 0LL;
                          v147 = v138 + 6;
LABEL_282:
                          RtlpInterlockedPushEntrySList(v146, v147, j, v56);
                        }
                        goto LABEL_11;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v139 + 2, (signed __int64)v124, 0LL) )
                    {
                      goto LABEL_11;
                    }
                  }
                  goto LABEL_333;
                }
              }
            }
          }
        }
      }
      else
      {
        _m_prefetchw((const void *)(v124 + 11));
        if ( _InterlockedAnd(v124 + 11, 0xFFFFFFF9) == 6 )
        {
          v176 = **(_QWORD **)v124;
          *(_QWORD *)v124 = 0LL;
          RtlpInterlockedPushEntrySList(v176, v124 + 12, v128, v126);
          goto LABEL_213;
        }
        if ( RtlpIsSubSegmentReuseable((__int64)v128, (__int64)v124) )
        {
          do
          {
            v166 = *((_DWORD *)v124 + 11);
            if ( !v166 || (v166 & 2) != 0 )
              goto LABEL_213;
          }
          while ( v166 != _InterlockedCompareExchange(v124 + 11, v166 | 2, v166) );
          v167 = *(__int64 **)v124;
          for ( k = 0LL; ; k = (unsigned int)(k + 1) )
          {
            if ( (unsigned int)k >= 0x10 )
            {
              RtlpInterlockedPushEntrySList(
                *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v124 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v124 + 172LL)
                          + 1192)
              + 144LL,
                v124 + 12,
                *(unsigned __int16 *)(*(_QWORD *)v124 + 172LL),
                v167);
              break;
            }
            v169 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v167 + 87)) & 0xF;
            v170 = (volatile signed __int32 *)v167[v169 + 2];
            v171 = &v167[v169];
            if ( v170 )
            {
              if ( (v170[11] & 1) == 0
                && v170 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                        v171 + 2,
                                                        (signed __int64)v124,
                                                        (signed __int64)v170) )
              {
                _m_prefetchw((const void *)(v170 + 11));
                if ( _InterlockedAnd(v170 + 11, 0xFFFFFFFD) == 2 )
                {
                  v172 = **(_QWORD **)v170;
                  *(_QWORD *)v170 = 0LL;
                  RtlpInterlockedPushEntrySList(v172, v170 + 12, k, v167);
                }
                break;
              }
            }
            else if ( !_InterlockedCompareExchange64(v171 + 2, (signed __int64)v124, 0LL) )
            {
              break;
            }
          }
        }
LABEL_213:
        while ( 1 )
        {
          v143 = *((_DWORD *)v124 + 11);
          if ( !v143 || (v143 & 2) != 0 )
            break;
          if ( v143 == _InterlockedCompareExchange(v124 + 11, v143 | 2, v143) )
          {
            v56 = *(__int64 **)v124;
            for ( j = 0LL; (unsigned int)j < 0x10; j = (unsigned int)(j + 1) )
            {
              v144 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v56 + 87)) & 0xF;
              v138 = (__int64 **)v56[v144 + 2];
              v145 = &v56[v144];
              if ( v138 )
              {
                if ( (*((_DWORD *)v138 + 11) & 1) == 0
                  && v138 == (__int64 **)_InterlockedCompareExchange64(
                                           v145 + 2,
                                           (signed __int64)v124,
                                           (signed __int64)v138) )
                {
                  _m_prefetchw((char *)v138 + 44);
                  v140 = _InterlockedAnd((volatile signed __int32 *)v138 + 11, 0xFFFFFFFD);
                  goto LABEL_222;
                }
              }
              else if ( !_InterlockedCompareExchange64(v145 + 2, (signed __int64)v124, 0LL) )
              {
                goto LABEL_11;
              }
            }
LABEL_333:
            v15 = *(unsigned __int16 **)v124;
            v16 = v124 + 12;
LABEL_10:
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 24LL) + 8LL * v15[86] + 1192) + 144LL,
              v16,
              v15[86],
              v56);
            goto LABEL_11;
          }
        }
      }
      continue;
    }
    break;
  }
  if ( v124 )
    goto LABEL_178;
  RtlpFreeUserBlock(v96, v113, v122, v123);
  return 0LL;
}
