/*
 * XREFs of KeWaitForMultipleObjects @ 0x1403981C0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiAgingThread @ 0x1402A84E0 (MiAgingThread.c)
 *     MiThreadFaultClusterAgingThread @ 0x1402A8AF0 (MiThreadFaultClusterAgingThread.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140389220 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14039867C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiGetAsynchronousFlushEntry @ 0x1403CB994 (MiGetAsynchronousFlushEntry.c)
 *     MiRebuildLargePagesThread @ 0x1403D1720 (MiRebuildLargePagesThread.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiModifiedWriterWaitForMdl @ 0x1403FF444 (MiModifiedWriterWaitForMdl.c)
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 *     MiMappedPageWriter @ 0x140490470 (MiMappedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x1404A62C0 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 *     MiIssueSegmentDereferenceWork @ 0x1404A9E70 (MiIssueSegmentDereferenceWork.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 *     MiTrimmingThread @ 0x1404B7730 (MiTrimmingThread.c)
 *     DifKeWaitForMultipleObjectsWrapper @ 0x1404BAA10 (DifKeWaitForMultipleObjectsWrapper.c)
 *     MiWaitForAvailablePages @ 0x1404D0118 (MiWaitForAvailablePages.c)
 *     MiZeroThreadEnterWaitState @ 0x1404E6364 (MiZeroThreadEnterWaitState.c)
 *     MiZeroNodeConductorWait @ 0x1404F18D8 (MiZeroNodeConductorWait.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 *     CmSiWaitForMultipleEvents @ 0x1406E7D60 (CmSiWaitForMultipleEvents.c)
 *     MiBalanceSetThread @ 0x1406F5170 (MiBalanceSetThread.c)
 *     MiZeroPageThread @ 0x140713D40 (MiZeroPageThread.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 *     PopThermalReadCounters @ 0x140A766C8 (PopThermalReadCounters.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140A7D9B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x140AE48C8 (CmpDoFileWrite.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140C066B4 (MiZeroAllPageFiles.c)
 *     KiComputeDispatchInterruptCost @ 0x140CCF150 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KeAbEncodeLockHandle @ 0x14025FF70 (KeAbEncodeLockHandle.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KiCheckDueTimeExpired @ 0x1403CACD0 (KiCheckDueTimeExpired.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     KiBeginThreadWait @ 0x1403CC710 (KiBeginThreadWait.c)
 *     KiWaitSatisfyOther @ 0x1403E2B14 (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     KeAbDecodeLockHandle @ 0x1405334B8 (KeAbDecodeLockHandle.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  PKWAIT_BLOCK WaitBlock; // rdi
  unsigned __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v11; // ebx
  NTSTATUS result; // eax
  PVOID *v13; // rdx
  __int64 v14; // r8
  volatile UCHAR *p_BlockState; // r15
  __int64 v16; // r14
  char *v17; // rdi
  int v18; // r13d
  struct _KPRCB *v19; // r10
  KWAIT_REASON v20; // r8d
  unsigned __int8 v21; // r13
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdi
  unsigned __int64 v24; // r14
  volatile unsigned __int8 *v25; // rdx
  unsigned __int64 v26; // rcx
  NTSTATUS v27; // r13d
  int v28; // r15d
  unsigned __int8 CurrentIrql; // di
  PVOID *__attribute__((__org_arrdim(0,0))) v30; // rsi
  __int64 v31; // r12
  unsigned __int64 v32; // rdi
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  PVOID *__attribute__((__org_arrdim(0,0))) v36; // rsi
  unsigned __int64 v37; // rax
  char v38; // r13
  AutoBoost *v39; // rax
  struct _KLOCK_ENTRY *v40; // rdx
  __int64 v41; // r15
  __int64 v42; // r8
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r15
  struct _KLOCK_ENTRIES *v45; // r9
  unsigned int v46; // r9d
  KWAIT_REASON v47; // [rsp+40h] [rbp-59h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-51h]
  unsigned int v49; // [rsp+50h] [rbp-49h] BYREF
  $08E725EC6134F01F525383E5528526A8 *v50; // [rsp+58h] [rbp-41h]
  PVOID *__attribute__((__org_arrdim(0,0))) v51; // [rsp+60h] [rbp-39h]
  ULONG v52; // [rsp+68h] [rbp-31h]
  __int64 v53; // [rsp+70h] [rbp-29h] BYREF
  PVOID v54; // [rsp+78h] [rbp-21h] BYREF
  struct _KTHREAD *v55; // [rsp+80h] [rbp-19h]
  _BYTE v56[8]; // [rsp+88h] [rbp-11h]

  WaitBlock = WaitBlockArray;
  v9 = 0LL;
  v51 = Object;
  v47 = WaitReason;
  v52 = Count;
  v50 = ($08E725EC6134F01F525383E5528526A8 *)WaitBlockArray;
  v53 = 0LL;
  v49 = 0;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  if ( WaitBlockArray )
  {
    if ( Count > 0x40 )
      goto LABEL_4;
  }
  else
  {
    if ( Count > 3 )
LABEL_4:
      KeBugCheck(0xCu);
    WaitBlock = CurrentThread->WaitBlock;
    v50 = &CurrentThread->320;
  }
  if ( WaitType )
  {
    v54 = 0LL;
    v11 = KiCheckWaitNext((__int64)CurrentThread, (__int64)Timeout, 0, &v53, &v49);
    while ( 1 )
    {
      result = KiBeginThreadWait((ULONG_PTR)CurrentThread, v11);
      if ( result )
        break;
      p_BlockState = &WaitBlock->BlockState;
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = 0LL;
      do
      {
        v17 = (char *)v51[v16];
        *((_BYTE *)p_BlockState - 1) = 1;
        *p_BlockState = 4;
        *(_WORD *)(p_BlockState + 1) = v16;
        if ( CurrentThread )
          *(_QWORD *)(p_BlockState + 7) = CurrentThread;
        *(_QWORD *)(p_BlockState + 15) = v17;
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v17, (__int64)v13, v14);
        v18 = *((_DWORD *)v17 + 1);
        if ( (*v17 & 0x7F) == 2 )
        {
          if ( (v17[48] & 2) != 0 )
            _bittestandset64((__int64 *)&v9, (unsigned int)v16);
          if ( v18 > 0 || CurrentThread == *((struct _KTHREAD **)v17 + 5) && v17[2] == CurrentPrcb->DpcRoutineActive )
          {
            v47 = Executive;
            if ( v18 == 0x80000000 )
            {
              _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                do
                  KeYieldProcessorEx(&v47);
                while ( CurrentThread->ThreadLock );
              }
              KiSatisfyThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v11, (__int64)v50, v16);
              RtlRaiseStatus(-1073741423);
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v47);
              while ( CurrentThread->ThreadLock );
            }
            v19 = CurrentPrcb;
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
            {
              CurrentThread->WaitStatus = (unsigned int)v16;
              CurrentThread->AbWaitObject = 0LL;
              *((_DWORD *)v17 + 1) = v18 - 1;
              if ( v18 == 1 )
                KiWaitSatisfyMutant(v17, CurrentThread, v19);
            }
LABEL_25:
            _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
            return KiSatisfyThreadWait(v19, (ULONG_PTR)CurrentThread, v11, (__int64)v50, v16);
          }
        }
        else if ( v18 > 0 )
        {
          v47 = Executive;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v47);
            while ( CurrentThread->ThreadLock );
          }
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = (unsigned int)v16;
            CurrentThread->AbWaitObject = 0LL;
            KiWaitSatisfyOther(v17);
          }
          v19 = CurrentPrcb;
          goto LABEL_25;
        }
        v13 = (PVOID *)*((_QWORD *)v17 + 2);
        if ( *v13 != v17 + 8 )
          __fastfail(3u);
        *(_QWORD *)(p_BlockState - 9) = v13;
        *(_QWORD *)(p_BlockState - 17) = v17 + 8;
        *v13 = (PVOID)(p_BlockState - 17);
        *((_QWORD *)v17 + 2) = p_BlockState - 17;
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        v21 = v52;
        v16 = (unsigned int)(v16 + 1);
        p_BlockState += 48;
      }
      while ( (unsigned int)v16 < v52 );
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v49, v53) )
      {
        v47 = Executive;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v47);
          while ( CurrentThread->ThreadLock );
        }
        v19 = CurrentPrcb;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = 258LL;
          CurrentThread->AbWaitObject = 0LL;
        }
        return KiSatisfyThreadWait(v19, (ULONG_PTR)CurrentThread, v11, (__int64)v50, v16);
      }
      v23 = 0LL;
      CurrentThread->WaitBlockCount = v21;
      v24 = 0LL;
      if ( v9 )
      {
        v36 = v51;
        do
        {
          _BitScanForward64(&v37, v9);
          LODWORD(CurrentPrcb) = 0;
          v38 = v37;
          _bittestandreset64((__int64 *)&v9, (unsigned int)v37);
          v39 = (AutoBoost *)KeAbPreAcquire((__int64)v36[v37], 0LL, 0LL, v22);
          v41 = (__int64)v39;
          if ( !v39 )
            break;
          v24 |= 1LL << v38;
          KeAbPreWait(v39, v40);
          v56[v23] = KeAbEncodeLockHandle(v41);
          v23 = (unsigned int)(v23 + 1);
        }
        while ( v9 );
        CurrentThread = v55;
      }
      v9 = 0LL;
      v27 = KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, (__int64 *)v50, v49, v53, v11, &v54);
      v11 = 0;
      if ( v54 )
      {
        v25 = 0LL;
        v26 = v24;
        while ( v26 )
        {
          _BitScanForward64((unsigned __int64 *)&v42, v26);
          LODWORD(CurrentPrcb) = 0;
          v26 &= ~(1LL << v42);
          if ( v54 == v51[v42] )
          {
            v43 = (unsigned int)v25;
            v24 &= ~(1LL << v42);
            v44 = KeAbDecodeLockHandle((unsigned __int8)v56[(unsigned int)v25]);
            KeAbPreAcquire((__int64)v45, v44, 0LL, v45);
            v26 = KiAbpGlobalState;
            if ( (KiAbpGlobalState & 1) != 0 )
            {
              LOBYTE(v25) = 2;
              AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v44 + 33), v25, 1u, v46);
            }
            else
            {
              *(_BYTE *)(v44 + 10) = 1;
            }
            if ( v43 >= 6 )
              _report_rangecheckfailure();
            v56[v43] = 0;
            break;
          }
          v25 = (volatile unsigned __int8 *)(unsigned int)((_DWORD)v25 + 1);
        }
        CurrentThread->AbWaitObject = 0LL;
      }
      v28 = 0;
      if ( v24 )
      {
        v30 = v51;
        do
        {
          LODWORD(CurrentPrcb) = 0;
          _BitScanForward64((unsigned __int64 *)&v31, v24);
          v24 &= ~(1LL << v31);
          if ( !v56[v28] )
            ++v28;
          v32 = KeAbDecodeLockHandle((unsigned __int8)v56[v28]);
          KeAbPreAcquire((__int64)v30[v31], v32, 0LL, v33);
          KeAbPostReleaseEx((struct _KTHREAD *)v30[v31], v32, v34, v35);
          ++v28;
          v9 = 0LL;
        }
        while ( v24 );
        CurrentThread = v55;
      }
      if ( v27 != 256 )
        return v27;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v25) = 2;
        LOBYTE(v26) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v26, v25);
      }
      CurrentThread->WaitIrql = CurrentIrql;
      WaitBlock = (PKWAIT_BLOCK)v50;
    }
  }
  else
  {
    v20 = WaitReason;
    LOBYTE(WaitReason) = WaitMode;
    return KiWaitForAllObjects(Count, (_DWORD)Object, v20, WaitReason, Alertable, (__int64)Timeout, (__int64)WaitBlock);
  }
  return result;
}
