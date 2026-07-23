/*
 * XREFs of CmpGetNextActiveHive @ 0x1408B95EC
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404ECFDC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 *     CmpFreeAllMemory @ 0x14085A5F0 (CmpFreeAllMemory.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14085F3EC (CmpIsHiveAlreadyLoaded.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpDoLocalizeNextHive @ 0x1408B76E0 (CmpDoLocalizeNextHive.c)
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmpDoReconcileNextHive @ 0x140AA8A70 (CmpDoReconcileNextHive.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     CmEtwRunDown @ 0x140B07438 (CmEtwRunDown.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B5F650 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     CmpLockHiveListShared @ 0x1408B9780 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 */

unsigned __int8 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int8 *PriorityFloorCounts; // rsi
  struct _KTHREAD *v3; // rdi

  PriorityFloorCounts = 0LL;
  v3 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  if ( a1 )
    v3 = (struct _KTHREAD *)&a1[201];
  CmpLockHiveListShared();
  while ( 1 )
  {
    v3 = *(struct _KTHREAD **)&v3->Header.Lock;
    if ( v3 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
      break;
    PriorityFloorCounts = v3[-2].PriorityFloorCounts;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v3->QuantumTarget) )
      break;
    PriorityFloorCounts = 0LL;
  }
  CmpUnlockHiveList();
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 205);
  return PriorityFloorCounts;
}
