/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180061D60 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhHeatMapDecayCounts @ 0x180062170 (RtlpHpLfhHeatMapDecayCounts.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180062B00 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180062D88 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180063110 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpTlLogGCScheduled @ 0x180064504 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x18007219C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800736A0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800BE5AC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800BEC50 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x18010B444 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int8 *v5; // r10
  unsigned __int64 v6; // r15
  unsigned int v7; // ecx
  __int64 v8; // r13
  int v9; // edi
  __int64 v10; // rbx
  void **TlsExpansionSlots; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // r11
  unsigned int v15; // edx
  signed __int32 v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // zf
  signed __int32 v20; // eax
  __int64 v21; // r9
  unsigned int v22; // ecx
  signed int v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  volatile signed __int32 *v29; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v31; // rax
  _QWORD *v32; // rcx
  volatile signed __int32 **v33; // rcx
  signed __int64 v34; // rbx
  signed __int64 v35; // rax
  unsigned __int64 v36; // rbx
  _QWORD *v37; // r8
  _QWORD *v38; // rdi
  unsigned __int64 *v39; // rax
  int v40; // edx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 **v47; // rcx
  unsigned __int64 *v48; // rax
  _QWORD *v49; // rcx
  unsigned __int64 *v50; // rax
  int v51; // r9d
  int v52; // edi
  __int64 Subsegment; // rbx
  _RTL_SRWLOCK *v54; // rdi
  unsigned __int64 v55; // rax
  _QWORD *v56; // rax
  unsigned __int16 v57; // ax
  unsigned __int16 v58; // di
  unsigned __int8 *v59; // rcx
  __int64 v60; // rax
  int v61; // edx
  volatile signed __int16 *v62; // r9
  unsigned int v63; // ecx
  int v64; // ecx
  __int64 v65; // rax
  int v66; // edx
  volatile signed __int16 *v67; // r8
  unsigned int v68; // ecx
  int v69; // ecx
  __int64 v70; // r14
  int v71; // eax
  struct _TEB *v72; // r9
  int v73; // r10d
  __int64 v74; // rdi
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rdx
  __int16 v79; // r11
  _DWORD *v80; // r8
  unsigned __int64 i; // rcx
  struct _TEB *v85; // r8
  unsigned __int64 v86; // r15
  int v87; // edi
  __int64 v88; // r12
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // r9
  unsigned __int64 v92; // rdx
  int v93; // r11d
  unsigned int v94; // esi
  volatile signed __int64 *v95; // rdi
  volatile signed __int64 *v96; // r8
  signed __int64 v97; // r9
  __int64 v102; // rdx
  unsigned __int64 v105; // rax
  unsigned int v106; // eax
  signed __int64 v108; // rcx
  signed __int64 v109; // rax
  unsigned int v110; // eax
  int v111; // r8d
  unsigned int v112; // esi
  unsigned __int64 v113; // r14
  __int64 v114; // rdi
  unsigned __int64 v115; // rdi
  __int16 v116; // ax
  signed __int64 v117; // rax
  char v118; // dl
  unsigned __int64 v119; // rdx
  signed __int64 v120; // rtt
  __int64 v121; // rdx
  __int64 v122; // rcx
  int v123; // r8d
  int v124; // r9d
  unsigned __int64 v125; // r9
  signed __int64 v126; // rax
  __int64 v127; // r10
  signed __int64 v128; // rax
  signed __int64 v129; // rtt
  signed __int64 v130; // rdx
  int v132; // [rsp+30h] [rbp-39h]
  int v133; // [rsp+34h] [rbp-35h]
  unsigned __int16 v134; // [rsp+3Ah] [rbp-2Fh]
  __int64 v135; // [rsp+40h] [rbp-29h]
  unsigned __int64 v136; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 *v137; // [rsp+50h] [rbp-19h]
  unsigned __int64 v138; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 **v139; // [rsp+60h] [rbp-9h]
  _QWORD *v140; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 *v141; // [rsp+70h] [rbp+7h]
  signed __int64 v143; // [rsp+D0h] [rbp+67h]
  unsigned __int16 v144; // [rsp+D2h] [rbp+69h]
  __int64 v145; // [rsp+D8h] [rbp+6Fh]
  unsigned __int8 v146; // [rsp+D8h] [rbp+6Fh]
  int v147; // [rsp+DCh] [rbp+73h]

  v4 = 0LL;
  v5 = (unsigned __int8 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 6));
  v139 = (unsigned __int64 **)&v138;
  v6 = a1;
  v133 = 0;
  v7 = (unsigned __int16)*(_DWORD *)(a1 + 84);
  v8 = a2;
  v138 = (unsigned __int64)&v138;
  v9 = 0;
  v135 = (__int64)v5;
  if ( v7 < 0x40 )
  {
    v10 = __readgsqword(8 * v7 + 5248);
    goto LABEL_5;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v10 = (__int64)TlsExpansionSlots[v7 - 64];
LABEL_5:
    if ( v10 )
      goto LABEL_7;
  }
  v12 = RtlpHpLfhThreadDataInitializeSet(v6);
  v5 = (unsigned __int8 *)v135;
  v10 = v12;
LABEL_7:
  v13 = (_DWORD *)(v6 + ((unsigned __int64)WORD1(v10) << 6));
  if ( *((_BYTE *)v13 + 250) )
    NT_ASSERT("HeatMap->OnFreeList == 0");
  v14 = *v5 >> 1;
  if ( (unsigned int)v14 < 0x7D )
  {
    v16 = v13[63];
    v17 = MEMORY[0x7FFE0008] >> 20;
    v18 = (unsigned int)(MEMORY[0x7FFE0008] >> 20) - v16;
    if ( (_DWORD)v18 )
    {
      while ( 1 )
      {
        v20 = _InterlockedCompareExchange(v13 + 63, v17, v16);
        v19 = v16 == v20;
        v16 = v20;
        if ( v19 )
          break;
        v17 = (unsigned int)(MEMORY[0x7FFE0008] >> 20);
        v18 = (unsigned int)(MEMORY[0x7FFE0008] >> 20) - v20;
        if ( (unsigned int)(MEMORY[0x7FFE0008] >> 20) == v20 )
          goto LABEL_17;
      }
      if ( (_DWORD)v18 )
      {
        RtlpHpLfhHeatMapDecayCounts(v18, v17, (_WORD *)(v6 + ((unsigned __int64)WORD1(v10) << 6)), 2147352584LL, v18);
        v5 = (unsigned __int8 *)v135;
      }
    }
LABEL_17:
    v15 = *((unsigned __int16 *)v13 + v14);
  }
  else
  {
    v15 = 0;
  }
  v21 = 2LL;
  v22 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v22 )
  {
    if ( v22 == 2 )
    {
      v23 = 2;
    }
    else if ( v22 == 1 )
    {
      v23 = 1;
    }
    else
    {
      v21 = (__int64)NtCurrentTeb();
      v24 = *(_QWORD *)(v21 + 608);
      v25 = *(_QWORD *)(v21 + 616);
      v26 = v25 + v24;
      v27 = v24 ^ v25;
      *(_QWORD *)(v21 + 608) = v27 ^ __ROL8__(v24, 24) ^ (v27 << 16);
      *(_QWORD *)(v21 + 616) = __ROL8__(v27, 37);
      v23 = BYTE4(v26) % 3u;
    }
  }
  else if ( (RtlpHpLfhPerfFlags & 1) == 0 || *(_BYTE *)(v6 + 82) == 1 || v15 < *((unsigned __int16 *)v5 + 38) )
  {
    v23 = 0;
  }
  else if ( v15 >= *((unsigned __int16 *)v5 + 39) )
  {
    v23 = ((*(_BYTE *)(v6 + 80) & 1) != 0) + 1;
  }
  else
  {
    v23 = 1;
  }
  v145 = v6 + 192;
  if ( v13 == (_DWORD *)(v6 + 192) && v23 >= 1 )
  {
    v13 = RtlpHpLfhContextPrivateHeatMapCreate(v6, v10);
    v23 = 1;
LABEL_34:
    if ( !*(_WORD *)(v8 + 4) )
      goto LABEL_43;
    v28 = RtlpHpLfhPrivateSlotShutdown(v6, v8, v10, 0);
    goto LABEL_36;
  }
  if ( v23 != 2 )
    goto LABEL_34;
  if ( *(_WORD *)(v8 + 4) )
    goto LABEL_38;
  v28 = RtlpHpLfhPrivateSlotCreate(v6, v10, v5, v21);
  if ( v28 )
  {
LABEL_36:
    v8 = v28;
    goto LABEL_37;
  }
  v23 = 1;
LABEL_37:
  if ( !*(_WORD *)(v8 + 4) )
  {
LABEL_43:
    v29 = (volatile signed __int32 *)(v8 + 16);
    v132 = 2;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v31 = 0LL;
      v32 = SchedulerSharedDataSlot;
      while ( *v32 )
      {
        v31 = (unsigned int)(v31 + 1);
        ++v32;
        if ( (unsigned int)v31 >= 8 )
          goto LABEL_50;
      }
      v33 = (volatile signed __int32 **)&SchedulerSharedDataSlot[v31];
      if ( v33 )
        *v33 = v29;
    }
LABEL_50:
    if ( _interlockedbittestandset64(v29, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v8 + 16), (unsigned __int64)v29);
    goto LABEL_52;
  }
LABEL_38:
  v145 = (__int64)v13;
  v132 = 0;
  while ( 1 )
  {
LABEL_52:
    if ( !*(_WORD *)(v8 + 4) )
    {
      _m_prefetchw((const void *)(v8 + 56));
      v34 = *(_QWORD *)(v8 + 56);
      if ( (v34 & 0xFFF) != 0 )
      {
        while ( 1 )
        {
          v133 = v9;
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), v34 - 1, v34);
          if ( v34 == v35 )
            break;
          v34 = v35;
          v133 = 1;
          v9 = 1;
          if ( (v35 & 0xFFF) == 0 )
            goto LABEL_58;
        }
        v36 = v34 & 0xFFFFFFFFFFFFF000uLL;
        if ( v36 )
        {
          v133 = v9;
          goto LABEL_134;
        }
      }
    }
LABEL_58:
    v37 = *(_QWORD **)(v8 + 24);
    v141 = (unsigned __int64 *)&v140;
    v38 = (_QWORD *)(v8 + 24);
    v140 = &v140;
    v137 = &v136;
    v39 = &v136;
    v136 = (unsigned __int64)&v136;
    if ( v37 == (_QWORD *)(v8 + 24) )
    {
LABEL_77:
      v36 = 0LL;
    }
    else
    {
      do
      {
        v36 = (unsigned __int64)v37;
        v37 = (_QWORD *)*v37;
        v40 = *(unsigned __int16 *)(v36 + 18) + *(unsigned __int16 *)(v36 + 32);
        if ( v40 )
        {
          if ( v40 != *(unsigned __int16 *)(v36 + 34) )
          {
            RtlpHpLfhSubsegmentDelayFreeProcess(v6, v36, 0);
            v39 = (unsigned __int64 *)v136;
            goto LABEL_78;
          }
          v44 = *(_QWORD *)v36;
          v45 = *(_QWORD **)(v36 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *v45 != v36 )
            __fastfail(3u);
          *v45 = v44;
          *(_QWORD *)(v44 + 8) = v45;
          v46 = v136;
          if ( *(unsigned __int64 **)(v136 + 8) != &v136 )
            __fastfail(3u);
          *(_QWORD *)v36 = v136;
          *(_QWORD *)(v36 + 8) = &v136;
          *(_QWORD *)(v46 + 8) = v36;
          v39 = (unsigned __int64 *)v36;
          v136 = v36;
        }
        else
        {
          v41 = *(_QWORD *)v36;
          v42 = *(_QWORD **)(v36 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *v42 != v36 )
            __fastfail(3u);
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          v43 = v141;
          if ( (_QWORD **)*v141 != &v140 )
            __fastfail(3u);
          *(_QWORD *)(v36 + 8) = v141;
          *(_QWORD *)v36 = &v140;
          *v43 = v36;
          v39 = (unsigned __int64 *)v136;
          v141 = (unsigned __int64 *)v36;
        }
      }
      while ( v37 != v38 );
      if ( v39 == &v136 )
        goto LABEL_77;
      v36 = (unsigned __int64)v39;
      RtlpHpLfhSubsegmentDelayFreeProcess(v6, (__int64)v39, 1);
      v39 = (unsigned __int64 *)v136;
    }
LABEL_78:
    if ( v39 != &v136 )
    {
      v47 = *(unsigned __int64 ***)(v8 + 32);
      *v47 = v39;
      v48 = v137;
      *(_QWORD *)(v8 + 32) = v137;
      *v48 = (unsigned __int64)v38;
      *(_QWORD *)(v136 + 8) = v47;
    }
    if ( v140 != &v140 )
    {
      v49 = *(_QWORD **)(v8 + 32);
      *v49 = v140;
      v50 = v141;
      *(_QWORD *)(v8 + 32) = v141;
      *v50 = (unsigned __int64)v38;
      v140[1] = v49;
    }
    if ( v36 )
      break;
    RtlpHpLfhOwnerRunMaintenance(v6, v8, &v138, 0);
    if ( *(_BYTE *)(v8 + 1) )
      goto LABEL_102;
    if ( v132 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
      v132 = 0;
    }
    RtlpHpLfhContextSlotStandbyProcess(v6, 0);
    if ( (_DWORD *)v145 == v13 )
    {
      v52 = v23;
    }
    else
    {
      v52 = RtlpHpLfhHeatMapQuery(v6, v145, (unsigned __int8 *)v135, v51);
      if ( v52 >= 1 )
        v52 = 1;
    }
    Subsegment = RtlpHpLfhBucketGetSubsegment(v6, (_RTL_SRWLOCK *)v135, v52);
    if ( !Subsegment )
    {
      v54 = (_RTL_SRWLOCK *)v135;
      Subsegment = RtlpHpLfhSubsegmentCreate(v6, v135);
      if ( !Subsegment )
        goto LABEL_201;
    }
    if ( !*(_WORD *)(v8 + 4) )
    {
      v132 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
    }
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(v6, (char *)v8, (__int64 *)Subsegment, 0, 0) )
    {
LABEL_102:
      v9 = v133;
    }
    else
    {
      if ( *(_WORD *)(Subsegment + 32) != *(_WORD *)(Subsegment + 34) )
      {
        v56 = v139;
        if ( *v139 != &v138 )
          __fastfail(3u);
        *(_QWORD *)(Subsegment + 8) = v139;
        *(_QWORD *)Subsegment = &v138;
        *v56 = Subsegment;
        v139 = (unsigned __int64 **)Subsegment;
        goto LABEL_102;
      }
      v55 = v138;
      if ( *(unsigned __int64 **)(v138 + 8) != &v138 )
        __fastfail(3u);
      v9 = v133;
      *(_QWORD *)(Subsegment + 8) = &v138;
      *(_QWORD *)Subsegment = v55;
      *(_QWORD *)(v55 + 8) = Subsegment;
      v138 = Subsegment;
    }
  }
  v57 = *(_WORD *)(v36 + 32);
  v58 = 4096;
  if ( v57 > 0x1000u )
  {
    *(_WORD *)(v36 + 32) = v57 - 4096;
    goto LABEL_107;
  }
  *(_WORD *)(v36 + 32) = 0;
  v58 = v57;
  if ( v57 > 1u )
LABEL_107:
    *(_QWORD *)(v8 + 56) = (v58 - 1LL) ^ (v36 ^ (v58 - 1LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v132 )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
    v132 = 0;
  }
  if ( *(_BYTE *)(v145 + 250) )
    NT_ASSERT("HeatMap->OnFreeList == 0");
  v59 = (unsigned __int8 *)v135;
  v60 = *(unsigned __int8 *)v135 >> 1;
  if ( (unsigned int)v60 < 0x7D )
  {
    v61 = *(unsigned __int16 *)(v145 + 2 * v60);
    v62 = (volatile signed __int16 *)(v145 + 2 * v60);
    while ( 1 )
    {
      v63 = v58 + v61;
      if ( v63 >= 0xFFFF )
        v63 = 0xFFFF;
      if ( v63 == v61 )
        break;
      if ( v145 != v6 + 192 )
      {
        *v62 = v63;
        break;
      }
      v64 = (unsigned __int16)_InterlockedCompareExchange16(v62, v63, v61);
      if ( v64 == v61 )
        break;
      v61 = v64;
    }
    v59 = (unsigned __int8 *)v135;
  }
  if ( v13 != (_DWORD *)v145 )
  {
    if ( *((_BYTE *)v13 + 250) )
      NT_ASSERT("HeatMap->OnFreeList == 0");
    v65 = *v59 >> 1;
    if ( (unsigned int)v65 < 0x7D )
    {
      v66 = *((unsigned __int16 *)v13 + v65);
      v67 = (volatile signed __int16 *)v13 + v65;
      while ( 1 )
      {
        v68 = v58 + v66;
        if ( v68 >= 0xFFFF )
          v68 = 0xFFFF;
        if ( v68 == v66 )
          break;
        if ( v13 != (_DWORD *)(v6 + 192) )
        {
          *v67 = v68;
          break;
        }
        v69 = (unsigned __int16)_InterlockedCompareExchange16(v67, v68, v66);
        if ( v69 == v66 )
          break;
        v66 = v69;
      }
    }
  }
LABEL_134:
  if ( v132 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
  v70 = 0x100000001LL;
  v71 = qword_1801C5EC8 ^ *(_DWORD *)(v36 + 40) ^ (v36 >> 12);
  if ( *(_WORD *)(v8 + 4) )
  {
    v72 = NtCurrentTeb();
    v73 = *(unsigned __int8 *)(v36 + 24);
    v74 = (unsigned __int16)v71;
    v75 = v72->RngState[0];
    v76 = v72->RngState[1];
    if ( a3 >= (unsigned __int16)v71 )
      v70 = 1LL;
    v144 = ((unsigned int)qword_1801C5EC8 ^ *(_DWORD *)(v36 + 40) ^ (unsigned int)(v36 >> 12)) >> 16;
    v77 = v76 + v75;
    v78 = v75 ^ v76;
    v79 = BYTE4(v77);
    v72->RngState[1] = __ROL8__(v78, 37);
    v72->RngState[0] = v78 ^ __ROL8__(v75, 24) ^ (v78 << 16);
    v80 = (_DWORD *)(v36 + 64 + 8LL * *(unsigned __int8 *)(v36 + 36));
    for ( i = (unsigned int)~*v80; *v80 == -1; i = (unsigned int)~*v80 )
    {
      if ( v80 == (_DWORD *)(v36 + 64 + 8 * ((unsigned int)(v73 - 8) - 1LL)) )
        v80 = (_DWORD *)(v36 + 64);
      else
        v80 += 2;
    }
    _RAX = 1LL << ((unsigned __int16)(v79 * __popcnt(i)) >> 8);
    __asm
    {
      pdep    rcx, rax, rcx
      tzcnt   rdx, rcx
    }
    *(_QWORD *)v80 |= v70 << _RDX;
    LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v80 - (v36 + 64));
    *(_BYTE *)(v36 + 36) = (unsigned int)_RAX >> 5;
    v4 = v36 + (_DWORD)v74 * (_DWORD)_RAX + (unsigned int)v144;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v4, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a3 < (unsigned int)v74 )
    {
      if ( (_DWORD)v74 - a3 == 1 )
        *(_WORD *)(v74 + v4 - 2) = 0x8000;
      else
        *(_WORD *)(v74 + v4 - 2) = v74 - a3;
    }
    goto LABEL_200;
  }
  v85 = NtCurrentTeb();
  v86 = v36 + 64;
  v87 = *(unsigned __int8 *)(v36 + 24);
  v88 = (unsigned __int16)v71;
  v89 = v85->RngState[0];
  v90 = v85->RngState[1];
  v134 = ((unsigned int)qword_1801C5EC8 ^ *(_DWORD *)(v36 + 40) ^ (unsigned int)(v36 >> 12)) >> 16;
  if ( a3 >= (unsigned __int16)v71 )
    v70 = 1LL;
  v91 = v90 + v89;
  v92 = v89 ^ v90;
  v93 = BYTE4(v91);
  v85->RngState[0] = v92 ^ __ROL8__(v89, 24) ^ (v92 << 16);
  v85->RngState[1] = __ROL8__(v92, 37);
  v94 = *(unsigned __int8 *)(v36 + 50);
  v146 = *(_BYTE *)(v36 + 39);
  v95 = (volatile signed __int64 *)(v86 + 8 * ((unsigned int)(v87 - 8) - 1LL));
  v96 = (volatile signed __int64 *)(v86 + 8LL * *(unsigned __int8 *)(v36 + 36));
LABEL_153:
  v97 = *v96;
  for ( _RDX = (unsigned int)~*(_DWORD *)v96; *(_DWORD *)v96 == -1; _RDX = (unsigned int)~*(_DWORD *)v96 )
  {
    if ( v96 == v95 )
      v96 = (volatile signed __int64 *)(v36 + 64);
    else
      ++v96;
    v97 = *v96;
  }
  while ( 1 )
  {
    if ( (qword_1801C5EE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v93 * __popcnt(_RDX)) >> 8);
      __asm
      {
        pdep    rcx, rax, rdx
        tzcnt   r10, rcx
      }
      v102 = v70 << _R10;
    }
    else
    {
      if ( v96 == v95 || v94 != 32 )
      {
        __asm { tzcnt   rcx, rdx }
        _BitScanReverse64(&v105, _RDX);
        v106 = v105 - _RCX + 1;
        if ( v94 < v106 )
          v106 = v94;
        v93 = _RCX + ((v106 * v93) >> 8);
        _RDX = __ROR8__(_RDX, v93);
        __asm { tzcnt   r10, rdx }
        LODWORD(_R10) = v93 + _R10;
      }
      else
      {
        _RAX = (unsigned int)__ROR4__(_RDX, v93);
        __asm { tzcnt   r10, rax }
        LODWORD(_R10) = ((_BYTE)v93 + (_BYTE)_R10) & 0x1F;
      }
      v102 = v70 << _R10;
    }
    v108 = v97;
    v109 = _InterlockedCompareExchange64(v96, v97 | v102, v97);
    v97 = v109;
    if ( v109 == v108 )
      break;
    v110 = ~(_DWORD)v109;
    _RDX = v110;
    if ( !v110 )
    {
      if ( v96 == v95 )
        v96 = (volatile signed __int64 *)(v36 + 64);
      else
        ++v96;
      goto LABEL_153;
    }
  }
  v111 = (_DWORD)v96 - v86;
  v6 = a1;
  v112 = _R10 + 4 * v111;
  v113 = (unsigned __int64)v112 >> 5;
  *(_BYTE *)(v36 + 36) = v113;
  v114 = v134 + (unsigned int)v88 * v112;
  if ( v146 <= 1u )
  {
    if ( v112 > *(unsigned __int16 *)(v36 + 48) )
      RtlpHpLfhSubsegmentPrefetch(a1, v36, (unsigned int)v114, (unsigned int)v88);
    goto LABEL_178;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1, v36, v114) >= 0 )
  {
LABEL_178:
    v115 = v36 + v114;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v115, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a3 < (unsigned int)v88 )
    {
      if ( (_DWORD)v88 - a3 == 1 )
        v116 = 0x8000;
      else
        v116 = v88 - a3;
      *(_WORD *)(v88 + v115 - 2) = v116;
    }
    goto LABEL_185;
  }
  v4 = 0LL;
  v115 = 0LL;
  if ( v112 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 8 * v113 + 64), __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v112 & 0x1F));
    goto LABEL_186;
  }
LABEL_185:
  v4 = v115;
  if ( !v115 )
  {
LABEL_186:
    v117 = *(_QWORD *)(v36 + 16);
    do
    {
      v143 = v117;
      v118 = BYTE6(v117);
      v147 = HIDWORD(v117);
      if ( BYTE6(v117) == 1 )
        v118 = 2;
      WORD1(v143) = WORD1(v117) + 1;
      BYTE6(v143) = v118;
      v119 = (unsigned __int64)*(unsigned __int16 *)(v36 + 44) << 6;
      v120 = v117;
      v117 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 16), v143, v117);
    }
    while ( v120 != v117 );
    if ( !*(_BYTE *)(v119 + v6 + 92) )
    {
      *(_BYTE *)(v119 + v6 + 92) = 1;
      if ( !(_DWORD)qword_1801C6278 )
      {
        if ( Timer )
        {
          if ( !byte_1801CA908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
          {
            TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogGCScheduled(v122, v121, v123, v124);
          }
        }
      }
    }
    if ( BYTE2(v147) == 1 )
    {
      v125 = v6 + ((unsigned __int64)(unsigned __int16)v147 << 6);
      _m_prefetchw((const void *)(v125 + 8));
      v126 = *(_QWORD *)(v125 + 8);
      v127 = *(_QWORD *)(v36 + 24);
      *(_QWORD *)(v36 + 24) = v127 & 0xFFF | (v126 - (v126 & 0xFFF));
      v129 = v126;
      v128 = _InterlockedCompareExchange64((volatile signed __int64 *)(v125 + 8), v126 & 0xFFF | v36, v126);
      if ( v129 != v128 )
      {
        do
        {
          v130 = v128;
          *(_QWORD *)(v36 + 24) = v127 ^ (v128 ^ v127) & 0xFFFFFFFFFFFFF000uLL;
          v128 = _InterlockedCompareExchange64((volatile signed __int64 *)(v125 + 8), v36 | v128 & 0xFFF, v128);
        }
        while ( v128 != v130 );
      }
    }
  }
LABEL_200:
  v54 = (_RTL_SRWLOCK *)v135;
LABEL_201:
  if ( v133 )
    RtlpHpLfhBucketUpdateAffinityMapping(v6, v54);
  if ( (unsigned __int64 *)v138 != &v138 )
    RtlpHpLfhBucketAddSubsegment(v6, v54, &v138, 0);
  return v4;
}
