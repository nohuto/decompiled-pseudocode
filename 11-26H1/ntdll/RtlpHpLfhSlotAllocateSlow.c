/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180016630 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhHeatMapDecayCounts @ 0x180016A40 (RtlpHpLfhHeatMapDecayCounts.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180093238 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800944D0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180094B78 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180095160 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1800953E8 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180095770 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180095A30 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180097438 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800C0E1C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800C14C0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int8 *v5; // r10
  __int64 v6; // r15
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
  unsigned int v21; // ecx
  signed int v22; // r14d
  struct _TEB *v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
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
  __int64 v53; // rdx
  __int64 Subsegment; // rbx
  volatile signed __int8 *v55; // rdi
  unsigned __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned __int16 v58; // ax
  unsigned __int16 v59; // di
  unsigned __int8 *v60; // rcx
  __int64 v61; // rax
  int v62; // edx
  volatile signed __int16 *v63; // r9
  unsigned int v64; // ecx
  int v65; // ecx
  __int64 v66; // rax
  int v67; // edx
  volatile signed __int16 *v68; // r8
  unsigned int v69; // ecx
  int v70; // ecx
  __int64 v71; // r14
  int v72; // eax
  struct _TEB *v73; // r9
  int v74; // r10d
  __int64 v75; // rdi
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rdx
  __int16 v80; // r11
  _DWORD *v81; // r8
  unsigned __int64 i; // rcx
  struct _TEB *v86; // r8
  unsigned __int64 v87; // r15
  int v88; // edi
  __int64 v89; // r12
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // r9
  unsigned __int64 v93; // rdx
  int v94; // r11d
  unsigned int v95; // esi
  volatile signed __int64 *v96; // rdi
  volatile signed __int64 *v97; // r8
  signed __int64 v98; // r9
  __int64 v103; // rdx
  unsigned __int64 v106; // rax
  unsigned int v107; // eax
  signed __int64 v109; // rcx
  signed __int64 v110; // rax
  unsigned int v111; // eax
  int v112; // r8d
  unsigned int v113; // esi
  unsigned __int64 v114; // r14
  __int64 v115; // rdi
  unsigned __int64 v116; // rdi
  __int16 v117; // ax
  signed __int64 v118; // rax
  char v119; // dl
  unsigned __int64 v120; // rdx
  signed __int64 v121; // rtt
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int64 v126; // r9
  signed __int64 v127; // rax
  __int64 v128; // r10
  signed __int64 v129; // rax
  signed __int64 v130; // rtt
  signed __int64 v131; // rdx
  int v133; // [rsp+30h] [rbp-39h]
  int v134; // [rsp+34h] [rbp-35h]
  unsigned __int16 v135; // [rsp+3Ah] [rbp-2Fh]
  __int64 v136; // [rsp+40h] [rbp-29h]
  unsigned __int64 v137; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 *v138; // [rsp+50h] [rbp-19h]
  unsigned __int64 v139; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 **v140; // [rsp+60h] [rbp-9h]
  _QWORD *v141; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 *v142; // [rsp+70h] [rbp+7h]
  signed __int64 v144; // [rsp+D0h] [rbp+67h]
  unsigned __int16 v145; // [rsp+D2h] [rbp+69h]
  __int64 v146; // [rsp+D8h] [rbp+6Fh]
  unsigned __int8 v147; // [rsp+D8h] [rbp+6Fh]
  int v148; // [rsp+DCh] [rbp+73h]

  v4 = 0LL;
  v5 = (unsigned __int8 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 6));
  v140 = (unsigned __int64 **)&v139;
  v6 = a1;
  v134 = 0;
  v7 = (unsigned __int16)*(_DWORD *)(a1 + 84);
  v8 = a2;
  v139 = (unsigned __int64)&v139;
  v9 = 0;
  v136 = (__int64)v5;
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
  v5 = (unsigned __int8 *)v136;
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
        v5 = (unsigned __int8 *)v136;
      }
    }
LABEL_17:
    v15 = *((unsigned __int16 *)v13 + v14);
  }
  else
  {
    v15 = 0;
  }
  v21 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v21 )
  {
    if ( v21 == 2 )
    {
      v22 = 2;
    }
    else if ( v21 == 1 )
    {
      v22 = 1;
    }
    else
    {
      v23 = NtCurrentTeb();
      v24 = v23->RngState[0];
      v25 = v23->RngState[1];
      v26 = v25 + v24;
      v27 = v24 ^ v25;
      v23->RngState[0] = v27 ^ __ROL8__(v24, 24) ^ (v27 << 16);
      v23->RngState[1] = __ROL8__(v27, 37);
      v22 = BYTE4(v26) % 3u;
    }
  }
  else if ( (RtlpHpLfhPerfFlags & 1) == 0 || *(_BYTE *)(v6 + 82) == 1 || v15 < *((unsigned __int16 *)v5 + 38) )
  {
    v22 = 0;
  }
  else if ( v15 >= *((unsigned __int16 *)v5 + 39) )
  {
    v22 = ((*(_BYTE *)(v6 + 80) & 1) != 0) + 1;
  }
  else
  {
    v22 = 1;
  }
  v146 = v6 + 192;
  if ( v13 == (_DWORD *)(v6 + 192) && v22 >= 1 )
  {
    v13 = RtlpHpLfhContextPrivateHeatMapCreate(v6, v10);
    v22 = 1;
LABEL_34:
    if ( !*(_WORD *)(v8 + 4) )
      goto LABEL_43;
    v28 = RtlpHpLfhPrivateSlotShutdown(v6, v8, v10, 0);
    goto LABEL_36;
  }
  if ( v22 != 2 )
    goto LABEL_34;
  if ( *(_WORD *)(v8 + 4) )
    goto LABEL_38;
  v28 = RtlpHpLfhPrivateSlotCreate(v6, v10, v5);
  if ( v28 )
  {
LABEL_36:
    v8 = v28;
    goto LABEL_37;
  }
  v22 = 1;
LABEL_37:
  if ( !*(_WORD *)(v8 + 4) )
  {
LABEL_43:
    v29 = (volatile signed __int32 *)(v8 + 16);
    v133 = 2;
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
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v8 + 16), (__int64)v29);
    goto LABEL_52;
  }
LABEL_38:
  v146 = (__int64)v13;
  v133 = 0;
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
          v134 = v9;
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), v34 - 1, v34);
          if ( v34 == v35 )
            break;
          v34 = v35;
          v134 = 1;
          v9 = 1;
          if ( (v35 & 0xFFF) == 0 )
            goto LABEL_58;
        }
        v36 = v34 & 0xFFFFFFFFFFFFF000uLL;
        if ( v36 )
        {
          v134 = v9;
          goto LABEL_134;
        }
      }
    }
LABEL_58:
    v37 = *(_QWORD **)(v8 + 24);
    v142 = (unsigned __int64 *)&v141;
    v38 = (_QWORD *)(v8 + 24);
    v141 = &v141;
    v138 = &v137;
    v39 = &v137;
    v137 = (unsigned __int64)&v137;
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
            v39 = (unsigned __int64 *)v137;
            goto LABEL_78;
          }
          v44 = *(_QWORD *)v36;
          v45 = *(_QWORD **)(v36 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *v45 != v36 )
            __fastfail(3u);
          *v45 = v44;
          *(_QWORD *)(v44 + 8) = v45;
          v46 = v137;
          if ( *(unsigned __int64 **)(v137 + 8) != &v137 )
            __fastfail(3u);
          *(_QWORD *)v36 = v137;
          *(_QWORD *)(v36 + 8) = &v137;
          *(_QWORD *)(v46 + 8) = v36;
          v39 = (unsigned __int64 *)v36;
          v137 = v36;
        }
        else
        {
          v41 = *(_QWORD *)v36;
          v42 = *(_QWORD **)(v36 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 || *v42 != v36 )
            __fastfail(3u);
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          v43 = v142;
          if ( (_QWORD **)*v142 != &v141 )
            __fastfail(3u);
          *(_QWORD *)(v36 + 8) = v142;
          *(_QWORD *)v36 = &v141;
          *v43 = v36;
          v39 = (unsigned __int64 *)v137;
          v142 = (unsigned __int64 *)v36;
        }
      }
      while ( v37 != v38 );
      if ( v39 == &v137 )
        goto LABEL_77;
      v36 = (unsigned __int64)v39;
      RtlpHpLfhSubsegmentDelayFreeProcess(v6, (__int64)v39, 1);
      v39 = (unsigned __int64 *)v137;
    }
LABEL_78:
    if ( v39 != &v137 )
    {
      v47 = *(unsigned __int64 ***)(v8 + 32);
      *v47 = v39;
      v48 = v138;
      *(_QWORD *)(v8 + 32) = v138;
      *v48 = (unsigned __int64)v38;
      *(_QWORD *)(v137 + 8) = v47;
    }
    if ( v141 != &v141 )
    {
      v49 = *(_QWORD **)(v8 + 32);
      *v49 = v141;
      v50 = v142;
      *(_QWORD *)(v8 + 32) = v142;
      *v50 = (unsigned __int64)v38;
      v141[1] = v49;
    }
    if ( v36 )
      break;
    RtlpHpLfhOwnerRunMaintenance(v6, v8, &v139, 0);
    if ( *(_BYTE *)(v8 + 1) )
      goto LABEL_102;
    if ( v133 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 16));
      v133 = 0;
    }
    RtlpHpLfhContextSlotStandbyProcess(v6, 0LL);
    if ( (_DWORD *)v146 == v13 )
    {
      v52 = v22;
    }
    else
    {
      v52 = RtlpHpLfhHeatMapQuery(v6, v146, (unsigned __int8 *)v136, v51);
      if ( v52 >= 1 )
        v52 = 1;
    }
    Subsegment = RtlpHpLfhBucketGetSubsegment((__int64 *)v6, v136, v52);
    if ( !Subsegment )
    {
      v55 = (volatile signed __int8 *)v136;
      Subsegment = RtlpHpLfhSubsegmentCreate(v6, v136);
      if ( !Subsegment )
        goto LABEL_201;
    }
    if ( !*(_WORD *)(v8 + 4) )
    {
      v133 = 2;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v8 + 16), v53);
    }
    if ( (unsigned int)RtlpHpLfhOwnerMoveSubsegment(v6, (char *)v8, (__int64 *)Subsegment, 0, 0) )
    {
LABEL_102:
      v9 = v134;
    }
    else
    {
      if ( *(_WORD *)(Subsegment + 32) != *(_WORD *)(Subsegment + 34) )
      {
        v57 = v140;
        if ( *v140 != &v139 )
          __fastfail(3u);
        *(_QWORD *)(Subsegment + 8) = v140;
        *(_QWORD *)Subsegment = &v139;
        *v57 = Subsegment;
        v140 = (unsigned __int64 **)Subsegment;
        goto LABEL_102;
      }
      v56 = v139;
      if ( *(unsigned __int64 **)(v139 + 8) != &v139 )
        __fastfail(3u);
      v9 = v134;
      *(_QWORD *)(Subsegment + 8) = &v139;
      *(_QWORD *)Subsegment = v56;
      *(_QWORD *)(v56 + 8) = Subsegment;
      v139 = Subsegment;
    }
  }
  v58 = *(_WORD *)(v36 + 32);
  v59 = 4096;
  if ( v58 > 0x1000u )
  {
    *(_WORD *)(v36 + 32) = v58 - 4096;
    goto LABEL_107;
  }
  *(_WORD *)(v36 + 32) = 0;
  v59 = v58;
  if ( v58 > 1u )
LABEL_107:
    *(_QWORD *)(v8 + 56) = (v59 - 1LL) ^ (v36 ^ (v59 - 1LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v133 )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 16));
    v133 = 0;
  }
  if ( *(_BYTE *)(v146 + 250) )
    NT_ASSERT("HeatMap->OnFreeList == 0");
  v60 = (unsigned __int8 *)v136;
  v61 = *(unsigned __int8 *)v136 >> 1;
  if ( (unsigned int)v61 < 0x7D )
  {
    v62 = *(unsigned __int16 *)(v146 + 2 * v61);
    v63 = (volatile signed __int16 *)(v146 + 2 * v61);
    while ( 1 )
    {
      v64 = v59 + v62;
      if ( v64 >= 0xFFFF )
        v64 = 0xFFFF;
      if ( v64 == v62 )
        break;
      if ( v146 != v6 + 192 )
      {
        *v63 = v64;
        break;
      }
      v65 = (unsigned __int16)_InterlockedCompareExchange16(v63, v64, v62);
      if ( v65 == v62 )
        break;
      v62 = v65;
    }
    v60 = (unsigned __int8 *)v136;
  }
  if ( v13 != (_DWORD *)v146 )
  {
    if ( *((_BYTE *)v13 + 250) )
      NT_ASSERT("HeatMap->OnFreeList == 0");
    v66 = *v60 >> 1;
    if ( (unsigned int)v66 < 0x7D )
    {
      v67 = *((unsigned __int16 *)v13 + v66);
      v68 = (volatile signed __int16 *)v13 + v66;
      while ( 1 )
      {
        v69 = v59 + v67;
        if ( v69 >= 0xFFFF )
          v69 = 0xFFFF;
        if ( v69 == v67 )
          break;
        if ( v13 != (_DWORD *)(v6 + 192) )
        {
          *v68 = v69;
          break;
        }
        v70 = (unsigned __int16)_InterlockedCompareExchange16(v68, v69, v67);
        if ( v70 == v67 )
          break;
        v67 = v70;
      }
    }
  }
LABEL_134:
  if ( v133 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 16));
  v71 = 0x100000001LL;
  v72 = qword_1801C6EC8 ^ *(_DWORD *)(v36 + 40) ^ (v36 >> 12);
  if ( *(_WORD *)(v8 + 4) )
  {
    v73 = NtCurrentTeb();
    v74 = *(unsigned __int8 *)(v36 + 24);
    v75 = (unsigned __int16)v72;
    v76 = v73->RngState[0];
    v77 = v73->RngState[1];
    if ( a3 >= (unsigned __int16)v72 )
      v71 = 1LL;
    v145 = ((unsigned int)qword_1801C6EC8 ^ *(_DWORD *)(v36 + 40) ^ (unsigned int)(v36 >> 12)) >> 16;
    v78 = v77 + v76;
    v79 = v76 ^ v77;
    v80 = BYTE4(v78);
    v73->RngState[1] = __ROL8__(v79, 37);
    v73->RngState[0] = v79 ^ __ROL8__(v76, 24) ^ (v79 << 16);
    v81 = (_DWORD *)(v36 + 64 + 8LL * *(unsigned __int8 *)(v36 + 36));
    for ( i = (unsigned int)~*v81; *v81 == -1; i = (unsigned int)~*v81 )
    {
      if ( v81 == (_DWORD *)(v36 + 64 + 8 * ((unsigned int)(v74 - 8) - 1LL)) )
        v81 = (_DWORD *)(v36 + 64);
      else
        v81 += 2;
    }
    _RAX = 1LL << ((unsigned __int16)(v80 * __popcnt(i)) >> 8);
    __asm
    {
      pdep    rcx, rax, rcx
      tzcnt   rdx, rcx
    }
    *(_QWORD *)v81 |= v71 << _RDX;
    LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v81 - (v36 + 64));
    *(_BYTE *)(v36 + 36) = (unsigned int)_RAX >> 5;
    v4 = v36 + (_DWORD)v75 * (_DWORD)_RAX + (unsigned int)v145;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v4, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a3 < (unsigned int)v75 )
    {
      if ( (_DWORD)v75 - a3 == 1 )
        *(_WORD *)(v75 + v4 - 2) = 0x8000;
      else
        *(_WORD *)(v75 + v4 - 2) = v75 - a3;
    }
    goto LABEL_200;
  }
  v86 = NtCurrentTeb();
  v87 = v36 + 64;
  v88 = *(unsigned __int8 *)(v36 + 24);
  v89 = (unsigned __int16)v72;
  v90 = v86->RngState[0];
  v91 = v86->RngState[1];
  v135 = ((unsigned int)qword_1801C6EC8 ^ *(_DWORD *)(v36 + 40) ^ (unsigned int)(v36 >> 12)) >> 16;
  if ( a3 >= (unsigned __int16)v72 )
    v71 = 1LL;
  v92 = v91 + v90;
  v93 = v90 ^ v91;
  v94 = BYTE4(v92);
  v86->RngState[0] = v93 ^ __ROL8__(v90, 24) ^ (v93 << 16);
  v86->RngState[1] = __ROL8__(v93, 37);
  v95 = *(unsigned __int8 *)(v36 + 50);
  v147 = *(_BYTE *)(v36 + 39);
  v96 = (volatile signed __int64 *)(v87 + 8 * ((unsigned int)(v88 - 8) - 1LL));
  v97 = (volatile signed __int64 *)(v87 + 8LL * *(unsigned __int8 *)(v36 + 36));
LABEL_153:
  v98 = *v97;
  for ( _RDX = (unsigned int)~*(_DWORD *)v97; *(_DWORD *)v97 == -1; _RDX = (unsigned int)~*(_DWORD *)v97 )
  {
    if ( v97 == v96 )
      v97 = (volatile signed __int64 *)(v36 + 64);
    else
      ++v97;
    v98 = *v97;
  }
  while ( 1 )
  {
    if ( (qword_1801C6EE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v94 * __popcnt(_RDX)) >> 8);
      __asm
      {
        pdep    rcx, rax, rdx
        tzcnt   r10, rcx
      }
      v103 = v71 << _R10;
    }
    else
    {
      if ( v97 == v96 || v95 != 32 )
      {
        __asm { tzcnt   rcx, rdx }
        _BitScanReverse64(&v106, _RDX);
        v107 = v106 - _RCX + 1;
        if ( v95 < v107 )
          v107 = v95;
        v94 = _RCX + ((v107 * v94) >> 8);
        _RDX = __ROR8__(_RDX, v94);
        __asm { tzcnt   r10, rdx }
        LODWORD(_R10) = v94 + _R10;
      }
      else
      {
        _RAX = (unsigned int)__ROR4__(_RDX, v94);
        __asm { tzcnt   r10, rax }
        LODWORD(_R10) = ((_BYTE)v94 + (_BYTE)_R10) & 0x1F;
      }
      v103 = v71 << _R10;
    }
    v109 = v98;
    v110 = _InterlockedCompareExchange64(v97, v98 | v103, v98);
    v98 = v110;
    if ( v110 == v109 )
      break;
    v111 = ~(_DWORD)v110;
    _RDX = v111;
    if ( !v111 )
    {
      if ( v97 == v96 )
        v97 = (volatile signed __int64 *)(v36 + 64);
      else
        ++v97;
      goto LABEL_153;
    }
  }
  v112 = (_DWORD)v97 - v87;
  v6 = a1;
  v113 = _R10 + 4 * v112;
  v114 = (unsigned __int64)v113 >> 5;
  *(_BYTE *)(v36 + 36) = v114;
  v115 = v135 + (unsigned int)v89 * v113;
  if ( v147 <= 1u )
  {
    if ( v113 > *(unsigned __int16 *)(v36 + 48) )
      RtlpHpLfhSubsegmentPrefetch(a1, v36, (unsigned int)v115, (unsigned int)v89);
    goto LABEL_178;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1, v36, v115) >= 0 )
  {
LABEL_178:
    v116 = v36 + v115;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v116, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a3 < (unsigned int)v89 )
    {
      if ( (_DWORD)v89 - a3 == 1 )
        v117 = 0x8000;
      else
        v117 = v89 - a3;
      *(_WORD *)(v89 + v116 - 2) = v117;
    }
    goto LABEL_185;
  }
  v4 = 0LL;
  v116 = 0LL;
  if ( v113 != -1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 8 * v114 + 64), __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v113 & 0x1F));
    goto LABEL_186;
  }
LABEL_185:
  v4 = v116;
  if ( !v116 )
  {
LABEL_186:
    v118 = *(_QWORD *)(v36 + 16);
    do
    {
      v144 = v118;
      v119 = BYTE6(v118);
      v148 = HIDWORD(v118);
      if ( BYTE6(v118) == 1 )
        v119 = 2;
      WORD1(v144) = WORD1(v118) + 1;
      BYTE6(v144) = v119;
      v120 = (unsigned __int64)*(unsigned __int16 *)(v36 + 44) << 6;
      v121 = v118;
      v118 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 16), v144, v118);
    }
    while ( v121 != v118 );
    if ( !*(_BYTE *)(v120 + v6 + 92) )
    {
      *(_BYTE *)(v120 + v6 + 92) = 1;
      if ( !(_DWORD)qword_1801C7278 )
      {
        if ( qword_1801C7268 )
        {
          if ( !byte_1801CB8C8 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
          {
            TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 )
              RtlpHpTlLogGCScheduled(v123, v122, v124, v125);
          }
        }
      }
    }
    if ( BYTE2(v148) == 1 )
    {
      v126 = v6 + ((unsigned __int64)(unsigned __int16)v148 << 6);
      _m_prefetchw((const void *)(v126 + 8));
      v127 = *(_QWORD *)(v126 + 8);
      v128 = *(_QWORD *)(v36 + 24);
      *(_QWORD *)(v36 + 24) = v128 & 0xFFF | (v127 - (v127 & 0xFFF));
      v130 = v127;
      v129 = _InterlockedCompareExchange64((volatile signed __int64 *)(v126 + 8), v127 & 0xFFF | v36, v127);
      if ( v130 != v129 )
      {
        do
        {
          v131 = v129;
          *(_QWORD *)(v36 + 24) = v128 ^ (v129 ^ v128) & 0xFFFFFFFFFFFFF000uLL;
          v129 = _InterlockedCompareExchange64((volatile signed __int64 *)(v126 + 8), v36 | v129 & 0xFFF, v129);
        }
        while ( v129 != v131 );
      }
    }
  }
LABEL_200:
  v55 = (volatile signed __int8 *)v136;
LABEL_201:
  if ( v134 )
    RtlpHpLfhBucketUpdateAffinityMapping(v6, v55);
  if ( (unsigned __int64 *)v139 != &v139 )
    RtlpHpLfhBucketAddSubsegment((__int64 *)v6, (__int64)v55, &v139, 0);
  return v4;
}
