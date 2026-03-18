/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40
 * Callers:
 *     KiAcquireProcessLockExclusive @ 0x140203690 (KiAcquireProcessLockExclusive.c)
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpAcquireLockExclusive @ 0x14027E170 (RtlpHpAcquireLockExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14027E960 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpSegLockAcquire @ 0x14027F770 (RtlpHpSegLockAcquire.c)
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiLockPageListAndLastPage @ 0x14029B840 (MiLockPageListAndLastPage.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiArePagefileContentsCorrupted @ 0x1402DB9F0 (MiArePagefileContentsCorrupted.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiObtainSystemCacheView @ 0x1402E4B60 (MiObtainSystemCacheView.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiAcquirePageListLock @ 0x1402FB4C0 (MiAcquirePageListLock.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     MiLockLowestValidPageTableEx @ 0x140300610 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopPepLockActivityLink @ 0x1403B3A70 (PopPepLockActivityLink.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiPerformSafePdeWrite @ 0x140441B30 (MiPerformSafePdeWrite.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140442A20 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetVadWakeList @ 0x140442EA0 (MiGetVadWakeList.c)
 *     MiCheckVadSequential @ 0x1404481E0 (MiCheckVadSequential.c)
 *     MiLockSectionControlArea @ 0x14044FAD0 (MiLockSectionControlArea.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
