/*
 * XREFs of MmMapViewInSystemCache @ 0x1402E29A0
 * Callers:
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAddViewsForSection @ 0x1402E31A0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1402E3790 (MiGetControlAreaPtes.c)
 *     MiGetSystemCacheReverseMap @ 0x1402E46F0 (MiGetSystemCacheReverseMap.c)
 *     MiLocateSubsectionNode @ 0x1402E48B0 (MiLocateSubsectionNode.c)
 *     MiObtainSystemCacheView @ 0x1402E4B60 (MiObtainSystemCacheView.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiLockControlAreaFileObjectExclusive @ 0x1403167F4 (MiLockControlAreaFileObjectExclusive.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiLocatePagefileSubsection @ 0x140340310 (MiLocatePagefileSubsection.c)
 *     MiRemoveSystemCacheReferences @ 0x14036D470 (MiRemoveSystemCacheReferences.c)
 *     MiReadyReservedView @ 0x140523988 (MiReadyReservedView.c)
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
  volatile unsigned __int64 v35; // rdx
  __int64 v36; // rbx
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // r15
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 HasShadow; // rax
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  volatile unsigned __int64 v51; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int64 i; // rax
  __int64 v61; // [rsp+20h] [rbp-38h]
  unsigned __int64 v62; // [rsp+20h] [rbp-38h]
  __int64 v63; // [rsp+28h] [rbp-30h]
  unsigned __int64 v64; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v65; // [rsp+70h] [rbp+18h]

  v65 = a3;
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
  v64 = *a3 >> 12;
  v12 = v64;
  v61 = (unsigned int)(v11 + v10);
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
      v46 = MiLocatePagefileSubsection(v7 + 128, &v64);
      v12 = v64;
      SubsectionNode = v46;
    }
  }
  result = MiAddViewsForSection(SubsectionNode);
  if ( (int)result < 0 )
  {
    ++dword_140E378A0;
    return result;
  }
  v14 = *a2;
  v64 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v7 + 60) & 0x3FF));
  if ( v14 )
  {
    MiReadyReservedView(v64, v14);
  }
  else
  {
    v15 = MiObtainSystemCacheView(v64);
    v14 = v15;
    if ( !v15 )
    {
      ++dword_140E378A0;
      MiRemoveSystemCacheReferences(SubsectionNode);
      return 3221225495LL;
    }
    *a2 = v15;
  }
  v16 = *(_QWORD *)(SubsectionNode + 8);
  v17 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = v16 + 8 * v12;
  v19 = v16 + 8LL * *(unsigned int *)(SubsectionNode + 44);
  v20 = v17 + 8 * v61;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v14);
  v23 = SystemCacheReverseMap[4];
  v64 += 22592LL;
  v24 = v22 & 0x3F | v23 & 0xC00000000000FFC0uLL | (*v65 >> 2) & 0x3FFFFFFFFFFF0000LL;
  v63 = (8 * v61) >> 3;
  v62 = (v25 & (v17 >> 9)) + v26;
  a5 = MiLockWorkingSetShared(v64);
  MiLockPageTableInternal(v64, v62, 0);
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
    v29 = &qword_140E37BA0;
    if ( v18 < qword_140E37BA0 || v18 >= qword_140E37BA8 + qword_140E37BA0 )
    {
      v29 = &qword_140E37B90;
      v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x800000000000000LL;
    }
    v30 = ((v18 - *v29) << 9) ^ (v28 ^ ((v18 - *v29) << 9)) & 0xFFC0000000000FFFuLL;
    v31 = v30 | 0x400;
    if ( qword_140E2D740 )
    {
      v32 = v30;
      v33 = v30 | 0x410;
      v34 = qword_140E2D740 | v32 | 0x400;
      if ( (qword_140E2D740 & v31) == 0 )
        v33 = v34;
      v31 = v33;
    }
    *(_QWORD *)v17 = v31;
    v18 += 8LL;
  }
  SystemCacheReverseMap[4] |= 0xC000000000000000uLL;
  v35 = *(_QWORD *)v62;
  if ( v62 >= 0xFFFFF6FB7DBED000uLL
    && v62 <= 0xFFFFF6FB7DBED7F8uLL
    && (v35 & 1) != 0
    && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(0xC000000000000000uLL, v35, v62);
    if ( HasShadow )
    {
      v49 = *(_QWORD *)(HasShadow + 1288);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 8 * ((v48 >> 3) & 0x1FF));
        if ( (v50 & 0x20) != 0 )
          v35 |= 0x20uLL;
        v51 = v35;
        v35 |= 0x42uLL;
        if ( (v50 & 0x42) == 0 )
          v35 = v51;
      }
    }
  }
  v36 = 48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v37 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v37 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v37);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v36 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v36 + 36) & 0x4000000) != 0 )
    v38 = *(_QWORD *)v36 >> 36;
  else
    v38 = *(_QWORD *)(v36 + 16) >> 17;
  v39 = v63 + v38;
  if ( (*(_DWORD *)(v36 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v36 = (v39 << 36) ^ ((v39 << 36) ^ *(_QWORD *)v36) & 0xFFFFC00FFFFFFFFFuLL;
  else
    *(_QWORD *)(v36 + 16) = (v39 << 17) ^ ((v39 << 17) ^ *(_QWORD *)(v36 + 16)) & 0xFFFFFFFFF801FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v62 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v57 = *(_DWORD *)(v64 + 184) & 0xF;
    if ( v57 )
    {
      if ( v57 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        goto LABEL_38;
      }
      v58 = 3LL;
      if ( v57 == 5 )
        v58 = 0LL;
    }
    else
    {
      v58 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v58]);
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0
    || v62 < 0xFFFFF6FB7DBED000uLL
    || v62 > 0xFFFFF6FB7DBEDFFFuLL
    || (v59 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0 && v62 >= 0xFFFFF6FB7DBED000uLL && v62 <= 0xFFFFF6FB7DBEDFFFuLL )
      _InterlockedAnd(
        (volatile signed __int32 *)&stru_140E2D930.PriorityFloorCounts[4
                                                                     * ((unsigned __int64)(2
                                                                                         * (unsigned int)((__int64)(v62 + 0x90482413000LL) >> 3)) >> 5)
                                                                     + 4],
        ~(2 << ((2 * ((__int64)(v62 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                * ((__int64)(v62 + 0x90482413000LL) >> 3)) & 0x1F)));
    else
      _InterlockedAnd64((volatile signed __int64 *)v62, 0xCFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel(v59 + 4 * ((v62 >> 3) & 0x1FF));
  }
LABEL_38:
  MiUnlockWorkingSetShared(v64, a5);
  v40 = *(_QWORD *)SubsectionNode;
  v41 = *(_QWORD *)SubsectionNode;
  if ( (SystemCacheReverseMap[3] & 1) != 0 )
  {
    MiLockControlAreaFileObjectExclusive(v41);
    if ( (*(_DWORD *)(v40 + 56) & 0x400) != 0 )
      goto LABEL_65;
    v44 = *(_QWORD *)(v40 + 8);
    v45 = (_QWORD *)(v40 + 8);
    if ( *(_QWORD *)(v44 + 8) == v40 + 8 )
    {
      *SystemCacheReverseMap = v44;
      SystemCacheReverseMap[1] = v45;
      *(_QWORD *)(v44 + 8) = SystemCacheReverseMap;
      *v45 = SystemCacheReverseMap;
      goto LABEL_65;
    }
LABEL_47:
    __fastfail(3u);
  }
  MiLockControlAreaFileObjectExclusive(v41);
  v42 = *(_QWORD *)(SubsectionNode + 88);
  v43 = (_QWORD *)(SubsectionNode + 88);
  if ( *(_QWORD **)(v42 + 8) != v43 )
    goto LABEL_47;
  *SystemCacheReverseMap = v42;
  SystemCacheReverseMap[1] = v43;
  *(_QWORD *)(v42 + 8) = SystemCacheReverseMap;
  *v43 = SystemCacheReverseMap;
LABEL_65:
  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v40 + 104);
  KeAbPostRelease(v40 + 104);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v54, v53);
  }
  return 0LL;
}
