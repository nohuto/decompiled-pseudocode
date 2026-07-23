/*
 * XREFs of MiSetPagesModified @ 0x140455A14
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     MiUpdateControlAreaCommitCount @ 0x14047ED48 (MiUpdateControlAreaCommitCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MiDeleteFileExtents @ 0x140AC5218 (MiDeleteFileExtents.c)
 *     MiUnmapImageInSystemSpace @ 0x140B1DACC (MiUnmapImageInSystemSpace.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  ULONG *v4; // rsi
  __int64 v5; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // r15
  char v15; // si
  unsigned __int64 valid; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  int v19; // r8d
  __int64 v20; // rdx
  _KPROCESS *v21; // rax
  __int64 v22; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v24; // rax
  int v25; // ebx
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 CommittedPages; // rbx
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // r13
  struct _KTHREAD *v35; // r13
  unsigned __int64 *v36; // rdi
  AutoBoost *v37; // rax
  void *v38; // rdx
  AutoBoost *v39; // rsi
  __int64 v40; // rdx
  $241382875694CED3D471BC5892DE3337 *v42; // rcx
  __int64 v43; // [rsp+40h] [rbp-E8h]
  __int64 v44; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v45; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-D0h]
  __int64 v48; // [rsp+68h] [rbp-C0h]
  _QWORD *v49; // [rsp+70h] [rbp-B8h]
  __int64 v50; // [rsp+78h] [rbp-B0h]
  __int64 v51; // [rsp+80h] [rbp-A8h]
  ULONG *v52; // [rsp+88h] [rbp-A0h]
  ULONG *v53; // [rsp+90h] [rbp-98h]
  unsigned __int64 v54; // [rsp+98h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+A8h] [rbp-80h]
  void *v56; // [rsp+B0h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-70h]
  __int64 v58; // [rsp+C0h] [rbp-68h]
  _OWORD v59[6]; // [rsp+C8h] [rbp-60h] BYREF
  char v60; // [rsp+140h] [rbp+18h]

  v59[0] = 0LL;
  v4 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*((_DWORD *)a1 + 15) & 0x3FF));
  v53 = v4;
  v52 = v4;
  v58 = *a1;
  v5 = *(unsigned int *)(v58 + 8);
  v51 = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v49 = (_QWORD *)a1[17];
  v55 = (unsigned __int64)&v49[v5];
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((int)a1, CLFS_LSN_NULL_EXT, 0, EffectivePagePriorityThread, 0, a2, 0LL);
  v8 = MiMapImageInSystemSpace(a1, 1LL, v59);
  if ( v8 >= 0 )
  {
    v56 = &unk_140E370C0;
    v9 = *(_QWORD *)&v59[0];
    v50 = *(_QWORD *)&v59[0];
    v10 = 0xFFFFF68000000000uLL;
    v11 = ((*(_QWORD *)&v59[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0LL;
    v48 = 0LL;
    v13 = v49;
    while ( 1 )
    {
      v46 = v9;
      v47 = v11;
      if ( (unsigned __int64)v13 >= v55 )
        break;
      if ( *v13 )
      {
        v14 = (__int64)v56;
        while ( 1 )
        {
          v15 = MiLockWorkingSetShared(v14, v9, v10);
          v60 = v15;
          valid = MiLockLowestValidPageTableEx(v14, v11, &v54, 0);
          v54 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_QWORD *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v14, valid);
          LOBYTE(v29) = v15;
          MiUnlockWorkingSetShared(v14, v29);
          v9 = v50;
        }
        v43 = ++v12;
        v48 = v12;
        v17 = 48 * ((*(_QWORD *)v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( *(__int64 *)(v17 + 40) < 0 )
        {
          v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          LODWORD(v46) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v46);
            while ( *(__int64 *)(v17 + 24) < 0 );
          }
          v19 = 1024;
          if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v17 + 34) & 8) == 0 )
          {
            v45 = *(_QWORD *)(v17 + 16);
            if ( (v45 & 8) != 0 )
            {
              *(_QWORD *)(v17 + 16) &= ~8uLL;
              v20 = v45;
              if ( (unsigned __int64)&v45 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v45 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (v45 & 1) != 0 && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
                {
                  v21 = MiPteHasShadow();
                  if ( v21 )
                  {
                    KernelWaitTime = v21[2].KernelWaitTime;
                    if ( KernelWaitTime )
                    {
                      v24 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v45 >> 3) & 0x1FF));
                      if ( (v24 & 0x20) != 0 )
                        v22 |= 0x20uLL;
                      v20 = v22 | 0x42;
                      if ( (v24 & 0x42) == 0 )
                        v20 = v22;
                    }
                  }
                }
                v19 = 1024;
              }
              v45 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
              v18 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
            }
            else
            {
              v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            }
          }
          v25 = *(_DWORD *)(v17 + 32);
          if ( *(__int64 *)(v17 + 40) < 0 && (*(_QWORD *)(v17 + 16) & 0x400000000000400LL) == 0x400 )
          {
            SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v17 + 16));
            if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
              && (SubsectionFromPte[8] & 0x20000) == 0 )
            {
              KeBugCheckEx(0x1Au, 0x8840uLL, v17, 0LL, 1uLL);
            }
          }
          if ( *(__int64 *)(v17 + 40) < 0
            && (*(_DWORD *)(v17 + 16) & v19) != 0
            && (*(_QWORD *)(v17 + 24) & 0x4000000000000000LL) == 0 )
          {
            v27 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v17 + 16));
            if ( (*(_DWORD *)(*(_QWORD *)v27 + 56LL) & 0x20) == 0 && (v27[38] & 1) == 0 )
              MiSetSubsectionModified(v27, 0LL);
          }
          if ( (v25 & 0x80000) != 0
            && MiCanPfnOriginalPteBeLost(v17)
            && (*(_QWORD *)(v17 + 16) & 8LL) != 0
            && (v25 & 0x100000) == 0 )
          {
            *(_QWORD *)(v17 + 16) &= ~8uLL;
          }
          *(_DWORD *)(v17 + 32) = v25 | 0x100000;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiReleasePageFileInfo(
              *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)),
              v18,
              1LL);
          v11 = v47;
          v12 = v43;
        }
        MiUnlockPageTableInternal(v14, v54);
        LOBYTE(v28) = v60;
        MiUnlockWorkingSetShared(v14, v28);
        v4 = v53;
        v13 = v49;
        v9 = v50;
      }
      v49 = ++v13;
      v11 += 8LL;
      v9 += 4096LL;
      v50 = v9;
    }
    MiUnmapImageInSystemSpace(v59);
    CommittedPages = MiGetCommittedPages(a1, v30, v31);
    v34 = CommittedPages - v12 + v5;
    if ( v34 )
      MiReturnCommit((__int64)v4, v34, 0);
    v44 = v12 - CommittedPages;
    if ( v12 != CommittedPages )
    {
      v35 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v36 = (unsigned __int64 *)(v58 + 40);
      v37 = (AutoBoost *)KeAbPreAcquire(v58 + 40, 0LL, 0LL, v33);
      v39 = v37;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
        ExfAcquirePushLockExclusiveEx(v36, v37, (__int64)v36);
      if ( v39 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v39, v38);
        else
          *((_BYTE *)v39 + 10) = 1;
      }
      MiUpdateControlAreaCommitCount(a1, v44);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v36);
      KeAbPostRelease((unsigned __int64)v36);
      if ( v35->SpecialApcDisable++ == -1 )
      {
        v42 = &v35->152;
        if ( ($241382875694CED3D471BC5892DE3337 *)v42->ApcState.ApcListHead[0].Flink != v42 )
          KiCheckForKernelApcDelivery((__int64)v42, v40);
      }
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
  else
  {
    MiReturnCommit((__int64)v4, v5, 0);
    return (unsigned int)v8;
  }
}
