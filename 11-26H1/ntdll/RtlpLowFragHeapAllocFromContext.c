/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x18001CED0
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180016DF0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180016F40 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpSetSegmentInfo @ 0x18001C5C0 (RtlpSetSegmentInfo.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x18001C770 (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x180038044 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180038104 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071E44 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180071F48 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpSubSegmentInitialize @ 0x180074E80 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800DCB60 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162CD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x180162D80 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180163540 (RtlGetCurrentProcessorNumberEx.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
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
  union _SLIST_HEADER *v53; // rbp
  PSLIST_ENTRY v54; // rax
  __int64 v55; // r9
  __int64 *v56; // rbx
  PSLIST_ENTRY v57; // r14
  __int64 v58; // rcx
  unsigned int v59; // r14d
  _SLIST_ENTRY *v60; // rbx
  struct _SLIST_ENTRY *v61; // r15
  union _SLIST_HEADER *v62; // rbp
  PSLIST_ENTRY v63; // rsi
  signed __int32 v64; // eax
  unsigned __int16 *v65; // r8
  _DWORD *v66; // rcx
  __int64 v67; // rcx
  char v68; // dl
  _DWORD *v69; // rcx
  __int64 v70; // rcx
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  signed __int32 v73; // eax
  unsigned __int16 *v74; // r9
  unsigned int i; // r8d
  __int64 v76; // rax
  volatile signed __int32 *v77; // rdx
  unsigned __int16 *v78; // rcx
  __int64 v79; // rcx
  char v80; // r8
  _DWORD *SharedData; // rcx
  __int64 v82; // rcx
  _DWORD *v83; // rcx
  __int64 v84; // rcx
  _QWORD *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // r14
  unsigned __int64 v88; // r14
  unsigned __int64 v90; // rax
  signed __int64 v91; // rcx
  unsigned __int64 v92; // rtt
  unsigned int v93; // edx
  __int64 v94; // rcx
  __int64 v95; // rbp
  unsigned __int16 *v96; // rdi
  unsigned int v97; // r10d
  int v98; // r8d
  unsigned int v99; // r9d
  signed __int64 v100; // rcx
  bool v101; // r11
  unsigned int v102; // r11d
  char v103; // cl
  char v104; // dl
  unsigned int v105; // edx
  unsigned int v106; // eax
  unsigned int v107; // esi
  unsigned int v108; // esi
  bool v109; // r12
  __int64 v110; // r13
  __int64 v111; // rbx
  PSLIST_ENTRY v112; // rdi
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rsi
  _DWORD *v115; // rcx
  __int64 v116; // rcx
  unsigned int v117; // edx
  unsigned __int64 v118; // rax
  __int64 v119; // rsi
  PSLIST_ENTRY v120; // rax
  unsigned int v121; // r8d
  volatile signed __int32 *v122; // rbx
  __int64 v123; // r13
  __int64 v124; // r9
  signed __int32 v125; // eax
  __int64 *v126; // r8
  _DWORD *v127; // rcx
  __int64 v128; // rcx
  char v129; // dl
  _DWORD *v130; // rcx
  __int64 v131; // rcx
  _DWORD *v132; // rcx
  __int64 v133; // rcx
  signed __int32 v134; // eax
  __int64 *v135; // r9
  unsigned int k; // r8d
  __int64 v137; // rax
  __int64 **v138; // rdx
  __int64 *v139; // rcx
  signed __int32 v140; // eax
  signed __int32 v141; // ett
  int v142; // eax
  signed __int32 v143; // eax
  __int64 *v144; // r9
  unsigned int n; // r8d
  __int64 v146; // rax
  __int64 *v147; // rcx
  __int64 v148; // rcx
  _QWORD **v149; // rdx
  __int64 v150; // r15
  __int64 v151; // r14
  __int64 v152; // rcx
  __int64 v153; // rbp
  __int64 Heap_0; // rax
  __int16 v155; // ax
  _DWORD *v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rdi
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  char *v163; // rcx
  unsigned __int32 v164; // eax
  unsigned __int32 v165; // eax
  __int64 v166; // rax
  signed __int32 v167; // eax
  unsigned __int16 *v168; // r9
  unsigned int j; // r8d
  __int64 v170; // rax
  unsigned __int16 *v171; // rcx
  signed __int32 v172; // ett
  __int64 v173; // rax
  signed __int32 v174; // eax
  __int64 *v175; // r9
  unsigned int m; // r8d
  __int64 v177; // rax
  volatile signed __int32 *v178; // rdx
  __int64 *v179; // rcx
  __int64 v180; // rcx
  PSLIST_ENTRY v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // [rsp+30h] [rbp-A8h]
  unsigned __int16 *v186; // [rsp+38h] [rbp-A0h]
  signed __int64 v187; // [rsp+38h] [rbp-A0h]
  unsigned int v188; // [rsp+40h] [rbp-98h]
  int v189; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v190; // [rsp+50h] [rbp-88h]
  __int64 v191; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v192; // [rsp+60h] [rbp-78h] BYREF
  __int64 v193; // [rsp+68h] [rbp-70h]
  __int64 v194; // [rsp+70h] [rbp-68h]
  __int64 v195; // [rsp+78h] [rbp-60h]
  PSLIST_HEADER ListHead; // [rsp+80h] [rbp-58h]
  int v198; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v199; // [rsp+F0h] [rbp+18h]
  int v200; // [rsp+F8h] [rbp+20h]

  v200 = a4;
  v199 = a3;
  v4 = (*(_BYTE *)(a1 + 672) & 1) == 0;
  v5 = 0;
  v198 = 0;
  v188 = 0;
  v7 = (unsigned __int16 *)(a1 + 676 + 4LL * a2);
  v190 = v7;
  if ( v4 && (*((_BYTE *)v7 + 3) & 1) != 0 )
  {
    v8 = NtCurrentTeb();
    UniqueThread = v8->ClientId.UniqueThread;
    v10 = (unsigned int)UniqueThread;
    HeapThreadData_low = LOBYTE(v8->HeapThreadData);
    v5 = HeapThreadData_low - 1;
    v188 = HeapThreadData_low - 1;
    if ( (int)HeapThreadData_low - 1 < 0 || RtlpAffinityState[HeapThreadData_low] != (unsigned int)UniqueThread )
    {
      RtlGetCurrentProcessorNumberEx(&v198);
      v12 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & BYTE2(v198));
      v5 = (unsigned __int8)(BYTE4(RtlpAffinityState[0]) & BYTE2(v198));
      v188 = v5;
      LOBYTE(v8->HeapThreadData) = (BYTE4(RtlpAffinityState[0]) & BYTE2(v198)) + 1;
      qword_1801CC7A8[v12] = v10;
    }
  }
  v13 = *((unsigned __int8 *)v7 + 2);
  v193 = 16LL * *v7;
  ListHead = (PSLIST_HEADER)(a1 + 48 * (v5 + 68LL));
  if ( v5 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192LL * v5;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  v185 = v14;
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
          v158 = v19 + 4LL * *(unsigned __int16 *)(v14 + 172);
          if ( (*(_BYTE *)(v158 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(
                      *(_QWORD *)(*(_QWORD *)v14 + 24LL),
                      *(unsigned __int8 *)(v158 + 678)) >= 0 )
          {
            *(_BYTE *)(v158 + 679) |= 1u;
            v163 = (unsigned int)RtlGetCurrentServiceSessionId(v160, v159, v161, v162)
                 ? (char *)NtCurrentPeb()->SharedData + 550
                 : (char *)2147353472;
            if ( *v163 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v19 + 24), *(unsigned __int8 *)(v158 + 678));
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
            v90 = qword_1801C6F00;
            do
            {
              v91 = v90 ^ (v90 >> 12) ^ ((v90 ^ (v90 >> 12)) << 25) ^ ((v90 ^ (v90 >> 12) ^ ((v90 ^ (v90 >> 12)) << 25)) >> 27);
              v92 = v90;
              v90 = _InterlockedCompareExchange64(&qword_1801C6F00, v91, v90);
            }
            while ( v92 != v90 );
            v27 = 29 * v91;
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
            v85 = (_QWORD *)(v30 + 8 * ((v29 - 1) >> 6));
            v31 = (_QWORD *)(v30 + 8 * ((unsigned __int64)(unsigned int)(v22 >> 16) >> 6));
            do
            {
              if ( *v31 != -1LL )
                break;
              if ( v31 == v85 )
                v31 = *(_QWORD **)(v23 + 40);
              else
                ++v31;
            }
            while ( v31 != (_QWORD *)(v30 + 8 * ((unsigned __int64)(unsigned int)(v22 >> 16) >> 6)) );
            if ( v31 == v85 && (v93 = v29 & 0x3F) != 0 )
            {
              v14 = v185;
              if ( v93 < v26 )
                LODWORD(v26) = *(_DWORD *)(v23 + 32) & 0x3F;
            }
            else
            {
              v14 = v185;
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
          v87 = v193;
          if ( (v200 & 8) != 0 )
            memset_thunk_772440563353939046((void *)(v41 + 16), 0, v193 - 8);
          v88 = v87 - v199;
          if ( v88 >= 0x3F )
          {
            *(_QWORD *)(v41 + 16LL * *v190) = v88;
            *(_BYTE *)(v41 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v41 + 15) = v88 | 0x80;
          }
          return v41 + 16;
        }
      }
      v42 = (volatile signed __int64 *)(v14 + 16);
      v195 = *(_QWORD *)v14;
      v194 = v14 + 16;
LABEL_36:
      v43 = (unsigned __int16 *)(v14 + 172);
      v44 = 0LL;
      v186 = (unsigned __int16 *)(v14 + 172);
      while ( 2 )
      {
        v45 = v186;
        v46 = 0LL;
        v47 = 0;
        v48 = v42;
        v49 = 16LL;
        do
        {
          v50 = (volatile signed __int32 *)*v48;
          v51 = v45;
          v186 = v45;
          if ( *v48 && *((unsigned __int16 *)v50 + 16) > v47 )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v86 = *v45, (unsigned int)v86 > 0x70)
              || *(_DWORD *)(v185 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v86]
              || (v80 = 1, (unsigned int)(*((_WORD *)v50 + 20) >> 2) <= *((_WORD *)v50 + 16)) )
            {
              v80 = 0;
            }
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v82 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v82 = 2147353482LL;
            if ( !*(_BYTE *)v82 )
            {
              v83 = NtCurrentPeb()->SharedData;
              if ( v83 && *v83 )
                v84 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v84 = 2147353472LL;
              if ( !*(_BYTE *)v84 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
              {
                if ( v80 )
                  goto LABEL_40;
LABEL_92:
                v44 = (volatile signed __int32 *)*v48;
                v47 = *((unsigned __int16 *)v50 + 16);
                v46 = v48;
                goto LABEL_40;
              }
            }
            if ( !v80 )
              goto LABEL_92;
            RtlpLogHeapReuseThresholdActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v185 + 24LL) + 24LL),
              *((_QWORD *)v50 + 1),
              *v51,
              *((unsigned __int16 *)v50 + 16));
          }
LABEL_40:
          ++v48;
          v45 = v43;
          --v49;
        }
        while ( v49 );
        v42 = (volatile signed __int64 *)v194;
        v52 = v195;
        if ( v46 )
        {
          v53 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v195 + 24) + 8LL * *v186 + 1192) + 144LL);
          while ( 1 )
          {
            v54 = RtlpInterlockedPopEntrySList(v53);
            v56 = (__int64 *)v54;
            v57 = v54;
            if ( !v54 )
              break;
            v56 = (__int64 *)&v54[-3];
            if ( (*((_DWORD *)&v54[-1].Next + 3) & 1) != 0 )
            {
              if ( !(unsigned int)RtlpSetSegmentInfo(v56, v185) )
              {
                RtlpInterlockedPushEntrySList(v53, v57);
                v56 = 0LL;
              }
              break;
            }
            _m_prefetchw((char *)v56 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v56 + 11, 0xFFFFFFFD) == 2 )
            {
              v94 = *(_QWORD *)*v56;
              *v56 = 0LL;
              RtlpInterlockedPushEntrySList(v94, v54);
            }
          }
          if ( v44 != (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v46,
                                                   (signed __int64)v56,
                                                   (signed __int64)v44) )
          {
            if ( v56 )
              RtlpInterlockedPushEntrySList(v53, v56 + 6);
            continue;
          }
          if ( !v56 )
            *(_WORD *)(v185 + 174) = (unsigned __int8)(((__int64)v46 - v185 - 16) >> 3);
          if ( v44 )
          {
            _m_prefetchw((const void *)(v44 + 11));
            if ( _InterlockedAnd(v44 + 11, 0xFFFFFFFD) != 2 )
              goto LABEL_53;
            v58 = **(_QWORD **)v44;
            *(_QWORD *)v44 = 0LL;
            RtlpInterlockedPushEntrySList(v58, v44 + 12);
            v14 = v185;
            goto LABEL_36;
          }
        }
        else
        {
          v44 = 0LL;
        }
        break;
      }
      v59 = 0;
      v60 = 0LL;
      v61 = 0LL;
      v62 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v52 + 24) + 8LL * *v186 + 1192) + 144LL);
      v63 = RtlpInterlockedPopEntrySList(v62);
      if ( !v63 )
        goto LABEL_52;
      while ( 2 )
      {
        v44 = (volatile signed __int32 *)&v63[-3];
        if ( (*((_DWORD *)&v63[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((const void *)(v44 + 11));
          if ( _InterlockedAnd(v44 + 11, 0xFFFFFFFD) != 2 )
            goto LABEL_346;
LABEL_349:
          v182 = **(_QWORD **)v44;
          *(_QWORD *)v44 = 0LL;
          RtlpInterlockedPushEntrySList(v182, v63);
          goto LABEL_346;
        }
        if ( !(unsigned int)RtlpSetSegmentInfo((__int64 *)&v63[-3], v185) )
        {
          v63->Next = v60;
          v181 = v63;
          v60 = v63;
          if ( v59 )
            v181 = v61;
          ++v59;
          v61 = v181;
          goto LABEL_346;
        }
        _m_prefetchw((const void *)(v44 + 11));
        if ( _InterlockedAnd(v44 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_349;
        if ( RtlpIsSubSegmentReuseable(v185, (__int64)&v63[-3]) )
          break;
LABEL_346:
        v44 = 0LL;
        v63 = RtlpInterlockedPopEntrySList(v62);
        if ( v63 )
          continue;
        break;
      }
      if ( v59 )
        InterlockedPushListSList(v62, v60, v61, v59);
LABEL_52:
      if ( v44 )
      {
LABEL_53:
        *((_BYTE *)v44 + 43) = v188;
        do
        {
          v64 = *((_DWORD *)v44 + 11);
          v14 = v185;
          if ( !v64 || (v64 & 6) != 0 )
            goto LABEL_11;
        }
        while ( v64 != _InterlockedCompareExchange(v44 + 11, v64 | 6, v64) );
        v65 = *(unsigned __int16 **)v44;
        if ( *(_QWORD *)v44 == v185 )
        {
          v66 = NtCurrentPeb()->SharedData;
          if ( v66 && *v66 )
            v67 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v67 = 2147353472LL;
          if ( *(_BYTE *)v67 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v185 + 24LL) + 24LL),
              *((_QWORD *)v44 + 1),
              (__int64)v65,
              v55);
          v44 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v185 + 8), (__int64)v44);
          if ( !v44 )
            continue;
          _m_prefetchw((const void *)(v44 + 11));
          if ( _InterlockedAnd(v44 + 11, 0xFFFFFFF9) == 6 )
          {
LABEL_281:
            v149 = (_QWORD **)(v44 + 12);
            v148 = **(_QWORD **)v44;
            *(_QWORD *)v44 = 0LL;
            goto LABEL_282;
          }
          if ( *((_WORD *)v44 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v166 = *v186, (unsigned int)v166 > 0x70)
              || *(_DWORD *)(v185 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v166]
              || (v68 = 1, (unsigned int)(*((_WORD *)v44 + 20) >> 2) <= *((_WORD *)v44 + 16)) )
            {
              v68 = 0;
            }
            v69 = NtCurrentPeb()->SharedData;
            if ( v69 && *v69 )
              v70 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v70 = 2147353482LL;
            if ( *(_BYTE *)v70
              || ((v71 = NtCurrentPeb()->SharedData) == 0LL || !*v71
                ? (v72 = 2147353472LL)
                : (v72 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v72 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v68 )
                goto LABEL_73;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v185 + 24LL) + 24LL),
                *((_QWORD *)v44 + 1),
                *v186,
                v55);
            }
            else if ( !v68 )
            {
LABEL_73:
              while ( 1 )
              {
                v73 = *((_DWORD *)v44 + 11);
                if ( !v73 || (v73 & 2) != 0 )
                  break;
                if ( v73 == _InterlockedCompareExchange(v44 + 11, v73 | 2, v73) )
                {
                  v74 = *(unsigned __int16 **)v44;
                  for ( i = 0; i < 0x10; ++i )
                  {
                    v76 = ((_BYTE)i + (unsigned __int8)v74[87]) & 0xF;
                    v77 = *(volatile signed __int32 **)&v74[4 * v76 + 8];
                    v78 = &v74[4 * v76];
                    if ( v77 )
                    {
                      if ( (v77[11] & 1) == 0
                        && v77 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                               (volatile signed __int64 *)v78 + 2,
                                                               (signed __int64)v44,
                                                               (signed __int64)v77) )
                      {
                        _m_prefetchw((const void *)(v77 + 11));
                        if ( _InterlockedAnd(v77 + 11, 0xFFFFFFFD) == 2 )
                        {
                          v79 = **(_QWORD **)v77;
                          *(_QWORD *)v77 = 0LL;
                          RtlpInterlockedPushEntrySList(v79, v77 + 12);
                        }
                        goto LABEL_11;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)v78 + 2,
                                 (signed __int64)v44,
                                 0LL) )
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
          if ( RtlpIsSubSegmentReuseable((__int64)v65, (__int64)v44) )
          {
            while ( 1 )
            {
              v167 = *((_DWORD *)v44 + 11);
              if ( !v167 || (v167 & 2) != 0 )
                break;
              if ( v167 == _InterlockedCompareExchange(v44 + 11, v167 | 2, v167) )
              {
                v168 = *(unsigned __int16 **)v44;
                for ( j = 0; ; ++j )
                {
                  if ( j >= 0x10 )
                  {
LABEL_9:
                    v15 = *(unsigned __int16 **)v44;
                    v16 = v44 + 12;
                    goto LABEL_10;
                  }
                  v170 = ((_BYTE)j + (unsigned __int8)v168[87]) & 0xF;
                  v138 = *(__int64 ***)&v168[4 * v170 + 8];
                  v171 = &v168[4 * v170];
                  if ( v138 )
                  {
                    if ( (*((_DWORD *)v138 + 11) & 1) == 0
                      && v138 == (__int64 **)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v171 + 2,
                                               (signed __int64)v44,
                                               (signed __int64)v138) )
                    {
                      _m_prefetchw((char *)v138 + 44);
                      v140 = *((_DWORD *)v138 + 11);
                      do
                      {
                        v172 = v140;
                        v140 = _InterlockedCompareExchange(
                                 (volatile signed __int32 *)v138 + 11,
                                 v140 & 0xFFFFFFFD,
                                 v140);
                      }
                      while ( v172 != v140 );
                      goto LABEL_222;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)v171 + 2,
                               (signed __int64)v44,
                               0LL) )
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
    v95 = a1;
    v96 = v190;
    v97 = *(_DWORD *)(v185 + 160);
    v98 = *(_DWORD *)(a1 + 672) & 2;
    v99 = *((unsigned __int8 *)v190 + 2);
    LODWORD(v187) = 0;
    do
    {
      v100 = *(_QWORD *)(a1 + 80);
      v101 = 0;
      if ( (_DWORD)v100 == v99 )
      {
        v101 = HIDWORD(v100) > 7;
        v142 = HIDWORD(v100) + 1;
        if ( HIDWORD(v100) > 7 )
          v142 = 0;
        HIDWORD(v187) = v142;
      }
      else
      {
        v187 = v99 | 0x100000000LL;
      }
    }
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v187, v100) != v100 );
    if ( !v101 || v98 )
      v97 >>= (v98 != 0) + 3;
    v102 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v96 + 2)];
    v103 = (*((_BYTE *)v96 + 3) & 1) - 1;
    if ( v102 >= 0x100 )
      v103 = *((_BYTE *)v96 + 3) & 1;
    v104 = v103 - 1;
    if ( !*(_DWORD *)(v185 + 164) )
      v104 = v103;
    v105 = 1 << (3 - v104);
    if ( v97 >= v105 )
      v105 = v97;
    if ( v105 < 4 )
    {
      v105 = 4;
    }
    else if ( v105 > 0x400 )
    {
      v105 = 1024;
    }
    v106 = ((((unsigned __int64)v105 + 31) >> 3) & 0xFFFFFFFC) + 68 + v105 * (v102 + 16);
    if ( v106 >= 0xF0000 )
      v106 = 983040;
    _BitScanReverse(&v107, v106 - 1);
    v108 = v107 + 1;
    if ( v108 <= 7 )
    {
      LOBYTE(v108) = 7;
    }
    else if ( v108 >= 0x12 )
    {
      LOBYTE(v108) = 18;
    }
    if ( (*((_BYTE *)v96 + 3) & 6) != 0 )
      LOBYTE(v108) = 18;
    v109 = (_BYTE)v108 == 18 || v97 >= 0x400;
    v110 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v96 + 2)];
    v111 = a1 + 48LL * (unsigned __int8)v108;
    ++*(_WORD *)(v111 - 212);
    v112 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v111 - 240));
    if ( v112 )
    {
      ++*(_WORD *)(v111 - 208);
      goto LABEL_165;
    }
    if ( (unsigned __int8)v108 > 7u
      && (v112 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * ((unsigned __int8)v108 - 6LL)))) != 0LL )
    {
LABEL_165:
      v113 = 1LL << LOBYTE(v112[1].Next);
      if ( v113 > 0xF0000 )
        v113 = 983040LL;
      v114 = v113 + WORD1(v112[1].Next);
      v115 = NtCurrentPeb()->SharedData;
      if ( v115 && *v115 )
        v116 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v116 = 2147353472LL;
      if ( *(_BYTE *)v116 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v112, v114, v110 + 16);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v114);
    }
    else
    {
      v150 = *(_QWORD *)(a1 + 24);
      v192 = 0LL;
      v189 = 0;
      v151 = 1LL << v108;
      v152 = *(_QWORD *)(v150 + 352);
      v191 = 0LL;
      if ( (unsigned __int64)(1LL << v108) > 0xF0000 )
        v151 = 983040LL;
      v153 = v151 + 0x2000;
      if ( !v109 )
        v153 = v151;
      RtlEnterCriticalSection(v152);
      Heap_0 = RtlAllocateHeap_0(v150, 8388609LL, v153);
      v112 = (PSLIST_ENTRY)Heap_0;
      if ( Heap_0 )
      {
        if ( v109 )
        {
          v192 = (v151 + Heap_0 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          LODWORD(v153) = v192 - Heap_0;
          v112 = (PSLIST_ENTRY)RtlReAllocateHeap_0(v150, 8388609LL, Heap_0, v192 - Heap_0 + 4096);
          RtlLeaveCriticalSection(*(_QWORD *)(v150 + 352));
          v191 = 4096LL;
          ZwProtectVirtualMemory(-1LL, &v192, &v191, 1LL, &v189);
          BYTE1(v112[1].Next) = 1;
          v155 = v153 - v151;
        }
        else
        {
          RtlLeaveCriticalSection(*(_QWORD *)(v150 + 352));
          v155 = 0;
          BYTE1(v112[1].Next) = 0;
        }
        WORD1(v112[1].Next) = v155;
        LOBYTE(v112[1].Next) = v108;
        v156 = NtCurrentPeb()->SharedData;
        if ( v156 && *v156 )
          v157 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v157 = 2147353472LL;
        if ( *(_BYTE *)v157 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentAlloc(v150, (_DWORD)v112, v153, v110 + 16, 1);
        _InterlockedIncrement((volatile signed __int32 *)(v111 - 224));
      }
      else
      {
        RtlLeaveCriticalSection(*(_QWORD *)(v150 + 352));
      }
      v95 = a1;
    }
    v117 = *(unsigned __int16 *)(v111 - 212);
    if ( v117 > 0x40 )
    {
      if ( v117 < *(unsigned __int16 *)(v111 - 210) + (*(unsigned __int16 *)(v111 - 210) >> 1)
        && *(unsigned __int16 *)(v111 - 208) < v117 - (v117 >> 1) )
      {
        v164 = *(_DWORD *)(v111 - 220);
        if ( v164 >= 2 )
        {
          v165 = *(_DWORD *)(v111 - 216);
          if ( v165 > 2 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v111 - 216), v165 - 1, v165);
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v111 - 220), v164 + 1, v164);
        }
      }
      *(_WORD *)(v111 - 212) = 0;
      *(_WORD *)(v111 - 210) = 0;
      *(_WORD *)(v111 - 208) = 0;
    }
    if ( !v112 )
      return 0LL;
    v118 = 1LL << LOBYTE(v112[1].Next);
    if ( v118 > 0xF0000 )
      v118 = 983040LL;
    v119 = v118 + WORD1(v112[1].Next);
    _InterlockedIncrement((volatile signed __int32 *)(v95 + 56));
    v120 = RtlpInterlockedPopEntrySList(ListHead);
    if ( v120 )
    {
      v122 = (volatile signed __int32 *)&v120[-3];
      break;
    }
    v122 = (volatile signed __int32 *)RtlpLowFragHeapAllocateFromZone(v95, v188);
    if ( v122 )
    {
      *((_QWORD *)v122 + 1) = 0LL;
LABEL_178:
      v123 = (__int64)v190;
      *((_BYTE *)v122 + 43) = v188;
      RtlpSubSegmentInitialize(
        v95,
        (_DWORD)v122,
        (_DWORD)v112,
        (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v123 + 2)],
        v119,
        v123);
      do
      {
        v125 = *((_DWORD *)v122 + 11);
        if ( !v125 || (v125 & 6) != 0 )
        {
          v14 = v185;
          goto LABEL_213;
        }
      }
      while ( v125 != _InterlockedCompareExchange(v122 + 11, v125 | 6, v125) );
      v126 = *(__int64 **)v122;
      v14 = v185;
      if ( *(_QWORD *)v122 == v185 )
      {
        v127 = NtCurrentPeb()->SharedData;
        if ( v127 && *v127 )
          v128 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v128 = 2147353472LL;
        if ( *(_BYTE *)v128 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v185 + 24LL) + 24LL),
            *((_QWORD *)v122 + 1),
            (__int64)v126,
            v124);
        v122 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v185 + 8), (__int64)v122);
        if ( v122 )
        {
          _m_prefetchw((const void *)(v122 + 11));
          if ( _InterlockedAnd(v122 + 11, 0xFFFFFFF9) == 6 )
          {
            v183 = **(_QWORD **)v122;
            *(_QWORD *)v122 = 0LL;
            RtlpInterlockedPushEntrySList(v183, v122 + 12);
          }
          else if ( *((_WORD *)v122 + 16) )
          {
            if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
              || (v173 = *(unsigned __int16 *)(v185 + 172), (unsigned int)v173 > 0x70)
              || *(_DWORD *)(v185 + 160) < 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v173]
              || (v129 = 1, (unsigned int)(*((_WORD *)v122 + 20) >> 2) <= *((_WORD *)v122 + 16)) )
            {
              v129 = 0;
            }
            v130 = NtCurrentPeb()->SharedData;
            if ( v130 && *v130 )
              v131 = (__int64)NtCurrentPeb()->SharedData + 560;
            else
              v131 = 2147353482LL;
            if ( *(_BYTE *)v131
              || ((v132 = NtCurrentPeb()->SharedData) == 0LL || !*v132
                ? (v133 = 2147353472LL)
                : (v133 = (__int64)NtCurrentPeb()->SharedData + 550),
                  *(_BYTE *)v133 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
            {
              if ( !v129 )
                goto LABEL_198;
              RtlpLogHeapReuseThresholdActivate(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v185 + 24LL) + 24LL),
                *((_QWORD *)v122 + 1),
                *(unsigned __int16 *)(v185 + 172),
                v124);
            }
            else if ( !v129 )
            {
LABEL_198:
              while ( 1 )
              {
                v134 = *((_DWORD *)v122 + 11);
                if ( !v134 || (v134 & 2) != 0 )
                  break;
                if ( v134 == _InterlockedCompareExchange(v122 + 11, v134 | 2, v134) )
                {
                  v135 = *(__int64 **)v122;
                  for ( k = 0; k < 0x10; ++k )
                  {
                    v137 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v135 + 87)) & 0xF;
                    v138 = (__int64 **)v135[v137 + 2];
                    v139 = &v135[v137];
                    if ( v138 )
                    {
                      if ( (*((_DWORD *)v138 + 11) & 1) == 0
                        && v138 == (__int64 **)_InterlockedCompareExchange64(
                                                 v139 + 2,
                                                 (signed __int64)v122,
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
                          v148 = **v138;
                          *v138 = 0LL;
                          v149 = v138 + 6;
LABEL_282:
                          RtlpInterlockedPushEntrySList(v148, v149);
                        }
                        goto LABEL_11;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v139 + 2, (signed __int64)v122, 0LL) )
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
        _m_prefetchw((const void *)(v122 + 11));
        if ( _InterlockedAnd(v122 + 11, 0xFFFFFFF9) == 6 )
        {
          v184 = **(_QWORD **)v122;
          *(_QWORD *)v122 = 0LL;
          RtlpInterlockedPushEntrySList(v184, v122 + 12);
          goto LABEL_213;
        }
        if ( RtlpIsSubSegmentReuseable((__int64)v126, (__int64)v122) )
        {
          do
          {
            v174 = *((_DWORD *)v122 + 11);
            if ( !v174 || (v174 & 2) != 0 )
              goto LABEL_213;
          }
          while ( v174 != _InterlockedCompareExchange(v122 + 11, v174 | 2, v174) );
          v175 = *(__int64 **)v122;
          for ( m = 0; ; ++m )
          {
            if ( m >= 0x10 )
            {
              RtlpInterlockedPushEntrySList(
                *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v122 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v122 + 172LL)
                          + 1192)
              + 144LL,
                v122 + 12);
              break;
            }
            v177 = ((_BYTE)m + (unsigned __int8)*((_WORD *)v175 + 87)) & 0xF;
            v178 = (volatile signed __int32 *)v175[v177 + 2];
            v179 = &v175[v177];
            if ( v178 )
            {
              if ( (v178[11] & 1) == 0
                && v178 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                        v179 + 2,
                                                        (signed __int64)v122,
                                                        (signed __int64)v178) )
              {
                _m_prefetchw((const void *)(v178 + 11));
                if ( _InterlockedAnd(v178 + 11, 0xFFFFFFFD) == 2 )
                {
                  v180 = **(_QWORD **)v178;
                  *(_QWORD *)v178 = 0LL;
                  RtlpInterlockedPushEntrySList(v180, v178 + 12);
                }
                break;
              }
            }
            else if ( !_InterlockedCompareExchange64(v179 + 2, (signed __int64)v122, 0LL) )
            {
              break;
            }
          }
        }
LABEL_213:
        while ( 1 )
        {
          v143 = *((_DWORD *)v122 + 11);
          if ( !v143 || (v143 & 2) != 0 )
            break;
          if ( v143 == _InterlockedCompareExchange(v122 + 11, v143 | 2, v143) )
          {
            v144 = *(__int64 **)v122;
            for ( n = 0; n < 0x10; ++n )
            {
              v146 = ((_BYTE)n + (unsigned __int8)*((_WORD *)v144 + 87)) & 0xF;
              v138 = (__int64 **)v144[v146 + 2];
              v147 = &v144[v146];
              if ( v138 )
              {
                if ( (*((_DWORD *)v138 + 11) & 1) == 0
                  && v138 == (__int64 **)_InterlockedCompareExchange64(
                                           v147 + 2,
                                           (signed __int64)v122,
                                           (signed __int64)v138) )
                {
                  _m_prefetchw((char *)v138 + 44);
                  v140 = _InterlockedAnd((volatile signed __int32 *)v138 + 11, 0xFFFFFFFD);
                  goto LABEL_222;
                }
              }
              else if ( !_InterlockedCompareExchange64(v147 + 2, (signed __int64)v122, 0LL) )
              {
                goto LABEL_11;
              }
            }
LABEL_333:
            v15 = *(unsigned __int16 **)v122;
            v16 = v122 + 12;
LABEL_10:
            RtlpInterlockedPushEntrySList(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 24LL) + 8LL * v15[86] + 1192) + 144LL,
              v16);
            goto LABEL_11;
          }
        }
      }
      continue;
    }
    break;
  }
  if ( v122 )
    goto LABEL_178;
  RtlpFreeUserBlock(v95, (__int64)v112, v121);
  return 0LL;
}
