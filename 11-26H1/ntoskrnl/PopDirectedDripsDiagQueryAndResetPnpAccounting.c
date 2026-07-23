/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404DCD70
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B0A9B8 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404C9E0C (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(
        __int64 a1,
        struct _LIST_ENTRY **a2,
        __int64 a3,
        __int64 a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char WaitBlockList; // di
  KIRQL v10; // si
  __int128 v11; // xmm0
  _OWORD *v12; // rbx
  __int64 v13; // rcx

  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
  WaitBlockList = (char)PopDirectedDripsDiagLock.WaitBlockList;
  v10 = v7;
  if ( LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[160];
  *a2 = PopDirectedDripsDiagLock.WaitListEntry.Flink;
  *(_OWORD *)a3 = v11;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)&PopDirectedDripsDiagLock.Spare18;
  *(_OWORD *)(a3 + 32) = *(_OWORD *)&PopDirectedDripsDiagLock.ThreadFlags2;
  *(_OWORD *)(a3 + 48) = *(_OWORD *)&PopDirectedDripsDiagLock.QueueListEntry.Blink;
  *(_OWORD *)(a3 + 64) = *(_OWORD *)&PopDirectedDripsDiagLock.Process;
  *(_OWORD *)(a3 + 80) = *(_OWORD *)&PopDirectedDripsDiagLock.UserAffinityPrimaryGroup;
  *(_OWORD *)(a3 + 96) = *(_OWORD *)&PopDirectedDripsDiagLock.Affinity;
  *(_QWORD *)(a3 + 112) = PopDirectedDripsDiagLock.NpxState;
  *(_OWORD *)a4 = *(_OWORD *)&PopDirectedDripsDiagLock.Teb;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)&PopDirectedDripsDiagLock.Timer.Header.Lock;
  *(_OWORD *)(a4 + 32) = *(_OWORD *)&PopDirectedDripsDiagLock.Timer.Header.WaitListHead.Blink;
  *(_LIST_ENTRY *)(a4 + 48) = PopDirectedDripsDiagLock.Timer.TimerListEntry;
  *(_OWORD *)(a4 + 64) = *(_OWORD *)&PopDirectedDripsDiagLock.Timer.Dpc;
  *(LIST_ENTRY *)(a4 + 80) = PopDirectedDripsDiagLock.WaitBlock[0].WaitListEntry;
  *(_OWORD *)(a4 + 96) = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[16];
  v12 = (_OWORD *)(a4 + 128);
  *(v12 - 1) = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[32];
  *v12 = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[48];
  v12[1] = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[64];
  v12[2] = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[80];
  v12[3] = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[96];
  v12[4] = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[112];
  v12[5] = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[128];
  v12[6] = *(_OWORD *)&PopDirectedDripsDiagLock.WaitBlockFill11[144];
  PopDirectedDripsDiagLock.WaitListEntry.Flink = 0LL;
  memset_0(&PopDirectedDripsDiagLock.WaitBlockFill11[160], 0, 0x78uLL);
  memset_0(&PopDirectedDripsDiagLock.Teb, 0, 0xF0uLL);
  if ( WaitBlockList )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v10);
}
