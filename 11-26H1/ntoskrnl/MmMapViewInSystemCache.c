/*
 * XREFs of MmMapViewInSystemCache @ 0x1402C4A60
 * Callers:
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1402C57D0 (MiGetControlAreaPtes.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockControlAreaFileObjectExclusive @ 0x140318824 (MiLockControlAreaFileObjectExclusive.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 *     MiRemoveSystemCacheReferences @ 0x14036F210 (MiRemoveSystemCacheReferences.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, _QWORD *a3, _DWORD *a4, unsigned __int8 a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  ULONG_PTR SubsectionNode; // r15
  __int64 v9; // r14
  BOOL v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  _QWORD *SystemCacheReverseMap; // r12
  char v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  volatile unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // r15
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 HasShadow; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  volatile unsigned __int64 v53; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int64 i; // rax
  __int64 v63; // [rsp+20h] [rbp-38h]
  unsigned __int64 v64; // [rsp+20h] [rbp-38h]
  __int64 v65; // [rsp+28h] [rbp-30h]
  unsigned __int64 v66; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v67; // [rsp+70h] [rbp+18h]

  v67 = a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v6 & 1) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 16LL);
  }
  else if ( (v6 & 2) != 0 )
  {
    v7 = **(_QWORD **)(v7 + 40);
  }
  SubsectionNode = 0LL;
  v9 = *a3;
  v10 = (*a4 & 0xFFF) != 0;
  v11 = *a4 >> 12;
  v66 = *a3 >> 12;
  v12 = v66;
  v63 = (unsigned int)(v11 + v10);
  if ( v12 < MiGetControlAreaPtes(v7) )
  {
    if ( *(_QWORD *)(v7 + 64) )
    {
      if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
      {
        SubsectionNode = v7 + 128;
        for ( i = *(unsigned int *)(v7 + 172); v12 >= i; i = *(unsigned int *)(SubsectionNode + 44) )
        {
          SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
          v12 -= i;
        }
      }
      else
      {
        SubsectionNode = MiLocateSubsectionNode(v7, v9, 0LL);
        v12 -= *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_DWORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
      }
    }
    else
    {
      v49 = MiLocatePagefileSubsection(v7 + 128, &v66);
      v12 = v66;
      SubsectionNode = v49;
    }
  }
  result = MiAddViewsForSection(SubsectionNode);
  if ( (int)result < 0 )
  {
    ++dword_140E37A20;
    return result;
  }
  v14 = *a2;
  v66 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v7 + 60) & 0x3FF));
  if ( v14 )
  {
    MiReadyReservedView(v66, v14);
  }
  else
  {
    v15 = MiObtainSystemCacheView(v66);
    v14 = v15;
    if ( !v15 )
    {
      ++dword_140E37A20;
      MiRemoveSystemCacheReferences(SubsectionNode);
      return 3221225495LL;
    }
    *a2 = v15;
  }
  v16 = *(_QWORD *)(SubsectionNode + 8);
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = v16 + 8 * v12;
  v19 = v16 + 8LL * *(unsigned int *)(SubsectionNode + 44);
  v20 = v17 + 8 * v63;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v14);
  v23 = SystemCacheReverseMap[4];
  v66 += 22592LL;
  v24 = v22 & 0x3F | v23 & 0xC00000000000FFC0uLL | (*v67 >> 2) & 0x3FFFFFFFFFFF0000LL;
  v65 = (8 * v63) >> 3;
  v64 = (v25 & (v17 >> 9)) + v26;
  a5 = MiLockWorkingSetShared(v66);
  MiLockPageTableInternal(v66, v64, 0LL);
  SystemCacheReverseMap[4] = v24;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  for ( SystemCacheReverseMap[3] = SubsectionNode; v17 < v20; v17 += 8LL )
  {
    if ( v18 >= v19 )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
      v18 = *(_QWORD *)(SubsectionNode + 8);
      v27 = *(unsigned int *)(SubsectionNode + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v19 = v18 + 8 * v27;
    }
    v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v29 = &qword_140E37D20;
    if ( v18 < qword_140E37D20 || v18 >= qword_140E37D28 + qword_140E37D20 )
    {
      v29 = &qword_140E37D10;
      v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x800000000000000LL;
    }
    v30 = ((v18 - *v29) << 9) ^ (v28 ^ ((v18 - *v29) << 9)) & 0xFFC0000000000FFFuLL;
    v31 = v30 | 0x400;
    if ( qword_140E2D8C0 )
    {
      v32 = v30;
      v33 = v30 | 0x410;
      v34 = qword_140E2D8C0 | v32 | 0x400;
      if ( (qword_140E2D8C0 & v31) == 0 )
        v33 = v34;
      v31 = v33;
    }
    *(_QWORD *)v17 = v31;
    v18 += 8LL;
  }
  v35 = v64;
  SystemCacheReverseMap[4] |= 0xC000000000000000uLL;
  v36 = *(_QWORD *)v64;
  if ( v64 >= 0xFFFFF6FB7DBED000uLL
    && v64 <= 0xFFFFF6FB7DBED7F8uLL
    && (v36 & 1) != 0
    && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(0xC000000000000000uLL, v36, v64);
    if ( HasShadow )
    {
      v51 = *(_QWORD *)(HasShadow + 1288);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v51 + 8 * ((v35 >> 3) & 0x1FF));
        if ( (v52 & 0x20) != 0 )
          v36 |= 0x20uLL;
        v53 = v36;
        v36 |= 0x42uLL;
        if ( (v52 & 0x42) == 0 )
          v36 = v53;
      }
    }
  }
  v37 = (v36 >> 12) & 0xFFFFFFFFFFLL;
  v38 = 0xFFFFDE0000000000uLL;
  v39 = 48 * v37 - 0x220000000000LL;
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v40 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38, v37, v35) )
      {
        HvlNotifyLongSpinWait(v40);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v39 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v39 + 36) & 0x4000000) != 0 )
    v41 = *(_QWORD *)v39 >> 36;
  else
    v41 = *(_QWORD *)(v39 + 16) >> 17;
  v42 = v65 + v41;
  if ( (*(_DWORD *)(v39 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v39 = (v42 << 36) ^ ((v42 << 36) ^ *(_QWORD *)v39) & 0xFFFFC00FFFFFFFFFuLL;
  else
    *(_QWORD *)(v39 + 16) = (v42 << 17) ^ ((v42 << 17) ^ *(_QWORD *)(v39 + 16)) & 0xFFFFFFFFF801FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v64 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v59 = *(_DWORD *)(v66 + 184) & 0xF;
    if ( v59 )
    {
      if ( v59 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_38;
      }
      v60 = 3LL;
      if ( v59 == 5 )
        v60 = 0LL;
    }
    else
    {
      v60 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v60]);
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(v66 + 184) & 0xF) != 0
    || v64 < 0xFFFFF6FB7DBED000uLL
    || v64 > 0xFFFFF6FB7DBEDFFFuLL
    || (v61 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(v66 + 184) & 0xF) != 0 && v64 >= 0xFFFFF6FB7DBED000uLL && v64 <= 0xFFFFF6FB7DBEDFFFuLL )
      _InterlockedAnd(
        (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                                     * ((unsigned __int64)(2
                                                                                         * (unsigned int)((__int64)(v64 + 0x90482413000LL) >> 3)) >> 5)
                                                                     + 4],
        ~(2 << ((2 * ((__int64)(v64 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                * ((__int64)(v64 + 0x90482413000LL) >> 3)) & 0x1F)));
    else
      _InterlockedAnd64((volatile signed __int64 *)v64, 0xCFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel(v61 + 4 * ((v64 >> 3) & 0x1FF));
  }
LABEL_38:
  MiUnlockWorkingSetShared(v66, a5);
  v43 = *(_QWORD *)SubsectionNode;
  v44 = *(_QWORD *)SubsectionNode;
  if ( (SystemCacheReverseMap[3] & 1) != 0 )
  {
    MiLockControlAreaFileObjectExclusive(v44);
    if ( (*(_DWORD *)(v43 + 56) & 0x400) != 0 )
      goto LABEL_65;
    v47 = *(_QWORD *)(v43 + 8);
    v48 = (_QWORD *)(v43 + 8);
    if ( *(_QWORD *)(v47 + 8) == v43 + 8 )
    {
      *SystemCacheReverseMap = v47;
      SystemCacheReverseMap[1] = v48;
      *(_QWORD *)(v47 + 8) = SystemCacheReverseMap;
      *v48 = SystemCacheReverseMap;
      goto LABEL_65;
    }
LABEL_47:
    __fastfail(3u);
  }
  MiLockControlAreaFileObjectExclusive(v44);
  v45 = *(_QWORD *)(SubsectionNode + 88);
  v46 = (_QWORD *)(SubsectionNode + 88);
  if ( *(_QWORD **)(v45 + 8) != v46 )
    goto LABEL_47;
  *SystemCacheReverseMap = v45;
  SystemCacheReverseMap[1] = v46;
  *(_QWORD *)(v45 + 8) = SystemCacheReverseMap;
  *v46 = SystemCacheReverseMap;
LABEL_65:
  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v43 + 104);
  KeAbPostRelease(v43 + 104);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v56, v55);
  }
  return 0LL;
}
