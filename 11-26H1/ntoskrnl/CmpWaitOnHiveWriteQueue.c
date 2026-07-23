/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140B35738
 * Callers:
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     CmpTraceHiveFlushStartWaitForActive @ 0x140B3580C (CmpTraceHiveFlushStartWaitForActive.c)
 *     CmpTraceHiveFlushFinishWaitForActive @ 0x140B3587C (CmpTraceHiveFlushFinishWaitForActive.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, struct _KTHREAD *a2)
{
  __int64 v4; // rcx
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  struct _KLOCK_ENTRY *v7; // rdx
  unsigned __int64 v8; // rbx
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KEVENT Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  struct _LIST_ENTRY *Flink; // [rsp+50h] [rbp-18h]

  memset(&Object, 0, sizeof(Object));
  v15 = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  Flink = a2->Header.WaitListHead.Flink;
  a2->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&Object;
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v4);
  CmpTraceHiveFlushStartWaitForActive();
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)a2, 0LL, 0LL, v5);
  v8 = (unsigned __int64)v6;
  if ( v6 )
    KeAbPreWait(v6, v7);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( v8 )
  {
    v11 = KeAbPreAcquire((__int64)a2, v8, 0LL, v9);
    KeAbPostReleaseEx(a2, v11, v12, v13);
  }
  CmpTraceHiveFlushFinishWaitForActive();
  return (unsigned int)v15;
}
