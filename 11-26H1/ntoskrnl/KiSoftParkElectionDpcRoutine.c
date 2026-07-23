/*
 * XREFs of KiSoftParkElectionDpcRoutine @ 0x14022BDF0
 * Callers:
 *     <none>
 * Callees:
 *     KiShouldSoftParkElectionBePerformed @ 0x14022BFC0 (KiShouldSoftParkElectionBePerformed.c)
 *     KiPerformSoftParkElection @ 0x14022C024 (KiPerformSoftParkElection.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiSoftParkElectionDpcRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 710);
  v14[0] = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v2].Flink
                                    + *(unsigned __int8 *)(a2 + 705))]
                 + 192);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 120));
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 768), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, v6, v8) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 768) );
  }
  *(_BYTE *)(a2 + 788) = 0;
  if ( (unsigned __int8)KiShouldSoftParkElectionBePerformed(a2)
    && (v10 = KiPerformSoftParkElection(v5, a2),
        ++*(_QWORD *)(a2 + 776),
        *(_DWORD *)(a2 + 784) = 0,
        *(_QWORD *)(a2 + 792) = 0LL,
        *(_QWORD *)(a2 + 1760) = 0LL,
        memset_0((void *)(a2 + 864), 0, 0x380uLL),
        v10) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 768), 0LL);
    do
    {
      _BitScanForward64(&v11, v10);
      v10 &= ~(1LL << v11);
      KiSoftParkElectionUnparkProcessor(CurrentPrcb);
    }
    while ( v10 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 120));
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v12);
    LOBYTE(v13) = 2;
    KiProcessDeferredReadyList(CurrentPrcb, v14, v13);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 768), 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 120));
  }
}
