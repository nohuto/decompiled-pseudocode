/*
 * XREFs of CmpGetLastHive @ 0x1408B79D4
 * Callers:
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1408B9780 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  struct _KTHREAD *i; // r8
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 0LL;
  CmpLockHiveListShared();
  for ( i = PspSiloMonitorLock.WaitBlock[2].Thread;
        i != (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
        i = *(struct _KTHREAD **)(v3 + 8) )
  {
    if ( (unsigned __int8)CmpReferenceHive(i[-2].PriorityFloorCounts) )
    {
      v0 = v2;
      break;
    }
  }
  CmpUnlockHiveList();
  return v0;
}
