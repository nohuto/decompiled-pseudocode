/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404E37D0
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B08A3C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404D03DC (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(
        __int64 a1,
        struct _LIST_ENTRY **a2,
        __int64 a3,
        _LIST_ENTRY *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  unsigned __int8 v9; // di
  KIRQL v10; // si
  __int128 v11; // xmm0
  _LIST_ENTRY *v12; // rbx
  __int64 v13; // rcx

  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink);
  v9 = PopDirectedDripsUmLock.WaitBlockFill5[40];
  v10 = v7;
  if ( PopDirectedDripsUmLock.WaitBlockFill5[40] )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = *(_OWORD *)&PopDirectedDripsUmLock.SavedApcStateFill[32];
  *a2 = PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink;
  *(_OWORD *)a3 = v11;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)&PopDirectedDripsUmLock.SchedulerApc.Type;
  *(_OWORD *)(a3 + 32) = *(_OWORD *)&PopDirectedDripsUmLock.SchedulerApcFill5[16];
  *(_OWORD *)(a3 + 48) = *(_OWORD *)&PopDirectedDripsUmLock.SchedulerApcFill5[32];
  *(_OWORD *)(a3 + 64) = *(_OWORD *)&PopDirectedDripsUmLock.SchedulerApcFill5[48];
  *(_OWORD *)(a3 + 80) = *(_OWORD *)&PopDirectedDripsUmLock.SchedulerApcFill5[64];
  *(_OWORD *)(a3 + 96) = *(_OWORD *)&PopDirectedDripsUmLock.SchedulerApcFill5[80];
  *(_QWORD *)(a3 + 112) = PopDirectedDripsUmLock.SuspendEvent.Header.WaitListHead.Flink;
  *a4 = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[72];
  a4[1] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[88];
  a4[2] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[104];
  a4[3] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[120];
  a4[4] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[136];
  a4[5] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[152];
  a4[6] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.WaitBlockFill11[168];
  v12 = a4 + 8;
  v12[-1] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.LastXStateSaveDebugInfo;
  *v12 = PopDirectedDripsUmLock.QueueListEntry;
  v12[1] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.NextProcessor;
  v12[2] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.UserAffinity;
  v12[3] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.AffinityVersion;
  v12[4] = *(_LIST_ENTRY *)&PopDirectedDripsUmLock.AffinityPrimaryGroup;
  v12[5] = PopDirectedDripsUmLock.SavedApcState.ApcListHead[0];
  v12[6] = PopDirectedDripsUmLock.SavedApcState.ApcListHead[1];
  PopDirectedDripsUmLock.WaitBlock[1].WaitListEntry.Flink = 0LL;
  memset_0(&PopDirectedDripsUmLock.SavedApcStateFill[32], 0, 0x78uLL);
  memset_0(&PopDirectedDripsUmLock.WaitBlockFill11[72], 0, 0xF0uLL);
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsUmLock.WaitListEntry.Blink, v10);
}
