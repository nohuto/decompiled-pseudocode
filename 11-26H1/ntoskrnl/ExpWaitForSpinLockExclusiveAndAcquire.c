/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0
 * Callers:
 *     KiAcquireProcessLockExclusive @ 0x140203690 (KiAcquireProcessLockExclusive.c)
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v4 = 0;
  do
  {
    _m_prefetchw(a1);
    v5 = *a1;
    while ( *a1 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( CurrentIrql != 0xFF )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( (++v4 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_28:
          HvlNotifyLongSpinWait(v4);
          goto LABEL_11;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v8 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v8 + 35) & 1) != 0 )
          {
            v9 = *(_QWORD *)(v8 + 36600);
            if ( !v9 || !*(_BYTE *)(v9 + 65) || !*(_BYTE *)(v9 + 64) )
              goto LABEL_28;
          }
        }
      }
      _mm_pause();
LABEL_11:
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      }
      v5 = *a1;
    }
  }
  while ( _interlockedbittestandset(a1, 0x1Fu) );
  return v4;
}
