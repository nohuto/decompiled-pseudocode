/*
 * XREFs of CmpGetNextActiveHive @ 0x1408B3048
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404F39FC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpAcceptBoot @ 0x14084E81C (CmpAcceptBoot.c)
 *     CmpFreeAllMemory @ 0x1408542E0 (CmpFreeAllMemory.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14085905C (CmpIsHiveAlreadyLoaded.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B2110 (CmpBlockTwoHiveWrites.c)
 *     CmpDoReconcileNextHive @ 0x140AAB490 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 */

unsigned __int8 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *v5; // rdi
  unsigned __int8 *PriorityFloorCounts; // rsi

  v5 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  if ( a1 )
    v5 = (struct _KTHREAD *)&a1[201];
  CmpLockHiveListShared(a1, a2, a3, a4);
  do
  {
    v5 = *(struct _KTHREAD **)&v5->Header.Lock;
    PriorityFloorCounts = 0LL;
    if ( v5 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
      break;
    PriorityFloorCounts = v5[-2].PriorityFloorCounts;
  }
  while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v5->QuantumTarget) );
  CmpUnlockHiveList();
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 205);
  return PriorityFloorCounts;
}
