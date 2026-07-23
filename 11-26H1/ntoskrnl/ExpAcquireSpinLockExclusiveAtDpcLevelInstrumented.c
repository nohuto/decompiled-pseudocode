/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0
 * Callers:
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14027DED0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpSegLockAcquire @ 0x14027ECE0 (RtlpHpSegLockAcquire.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiLockPageListAndLastPage @ 0x14029ADA0 (MiLockPageListAndLastPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiArePagefileContentsCorrupted @ 0x1402BD7B0 (MiArePagefileContentsCorrupted.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepLockActivityLink @ 0x1403BD780 (PopPepLockActivityLink.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiPerformSafePdeWrite @ 0x14043A640 (MiPerformSafePdeWrite.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetVadWakeList @ 0x14043B9B0 (MiGetVadWakeList.c)
 *     MiCheckVadSequential @ 0x140440CD0 (MiCheckVadSequential.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(int *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  int v6; // r15d
  char v7; // bp
  unsigned int InterruptCount; // r14d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  _DWORD *EtwSupport; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rax

  v2 = 0;
  v3 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
    InterruptCount = 0;
  }
  else
  {
    v7 = 1;
    v15 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = v15;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v2 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  v9 = (unsigned int)*a1;
  v10 = v9 & 0xFFFFFFFFBFFFFFFFuLL;
  if ( (v9 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v9, v3) )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      v9 = (unsigned int)*a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
  }
  if ( v2 )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v2;
  }
  if ( v7 )
  {
    v11 = __rdtsc();
    EtwSupport = KeGetCurrentPrcb()->EtwSupport;
    v13 = *((unsigned __int8 *)EtwSupport + 272);
    if ( (unsigned __int8)v13 >= 8u )
    {
      ++EtwSupport[69];
    }
    else
    {
      *((_BYTE *)EtwSupport + 272) = v13 + 1;
      v14 = 8LL * v13;
      *(_QWORD *)&EtwSupport[v14 + 4] = v11;
      EtwSupport[v14 + 8] = v11 - v6;
      EtwSupport[v14 + 9] = v2;
      *(_QWORD *)&EtwSupport[v14 + 6] = a1;
      EtwSupport[v14 + 10] = InterruptCount;
      LOBYTE(EtwSupport[v14 + 11]) = 3;
    }
  }
}
